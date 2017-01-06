#include <Timer.h>
#include "MatrixRouting.h"

// $Id: MatrixP.nc,v 1.0 2016-03-04 09:07:13 scipio Exp $
/*                  tab:4
# Matrix: Multihop Address Assignment for Any-to-Any Routing with IPv6

## Description:
Standard routing protocols for wireless sensor networks are mainly designed for
data collection and work by establishing a tree-like network topology, which
enables packets to be sent from the leaves to the root, or border router of the
network. The routing tables in such unidirectional networks are very simple and
small, since each node just needs to store the address of its parent in the tree. In this
work we propose Matrix, a platform-independent routing protocol that utilizes
the existing tree structure of the network to enable reliable and
efficient any-to-any data traffic. Matrix uses hierarchical IPv6 address
assignment in order to optimize routing table size, while preserving
bidirectional routing. We implemented Matrix on TinyOS and evaluated
its performance both analytically and through simulations on TOSSIM. Our results
showed that the proposed protocol is superior to available protocols, such as
XCtp (an extension of Ctp) and RPL, when it comes to any-to-any data
communication, in terms of reliability, message efficiency and memory footprint.

###Authors:
 * @author Bruna Soares Peres <bperes@dcc.ufmg.br>
 * @author Bruno Pereira dos Santos <bruno.ps@dcc.ufmg.br>
 * @author Otávio Augusto de Oliveira Souza <oaugusto@outlook.com>
 * @author Edson Roteia Araujo Junior <junioroteia@gmail.com>

 * @date August 04 2016
*/

generic module MatrixRoutingEngineP(uint8_t tableSize, uint8_t temporaryTableSize) {
    provides {
        interface MatrixInfo;
        interface StdControl;
        interface Init;
        interface MatrixUnicastNameFreeRouting;
        //interface MatrixRoutingPacket;
    } 
    uses {
        /**********************************************************************************************************************/
        /*StdControl and CtpInfo provide by CtpInfo                                                                           */
        interface CtpInfo;
        /**********************************************************************************************************************/
        /*responsable to implement message beacon using send and receive provide by AMSend and Receive interfaces */
        interface AMSend as BeaconSend;
        interface Receive as BeaconReceive;
        /**************************************/
        /*responsable to implemet procedure to distribute Ipv6 address using send and receive provide by AMSend(ActiveMessage)*/
        interface AMSend as ControlSend;
        interface Receive as ControlReceive;
        /**************************************/
        interface AMPacket;
        interface PacketAcknowledgements;
        /**********************************************************************************************************************/
        interface RootControl;
        interface SplitControl as RadioControl;
        /**************************************/
        interface Timer<TMilli> as TrickleTimerOne;
        interface Timer<TMilli> as TrickleTimerTwo;
        interface Timer<TMilli> as RetxmitTimer;
        interface Timer<TMilli> as UpdateTimer;
        interface Timer<TMilli> as BeaconTimer;
        /**************************************/
        interface Random;
        interface Leds;
    }
}

implementation {

    enum {
        AGGREGATION_MSG  = 0,
        DISTRIBUTION_MSG = 1,
    };

    //bool ECNOff = TRUE;
    static void startRetxmitTimer(uint16_t mask, uint16_t offset);
    void clearState(uint8_t state);
    bool hasState(uint8_t state);
    void setState(uint8_t state);

    // Matrix state variables.
    enum {
      RUNNING_ON       = 0x1, // Matrix is running?
      RADIO_ON         = 0x2, // Radio is on?
      ACK_PENDING      = 0x4, // Have an ACK pending?
      SENDING          = 0x8, // Am sending a packet?
      NEW_MESSAGE      = 0x10,// Have to send a message?
      IP_RECEIVED      = 0x20,// Do I have o ip address?
      IP_SENDING       = 0X40,// Am I sending ips?
      IP_SENT          = 0X80,// Did I finish the distribution?
    };

    // Start with all states false
    uint8_t forwardingState = 0; 

    //number of retries
    uint8_t retries;

    /*guards the parent from ip hierarchy.*/
    uint16_t ipParent = INVALID_ADDR;

    /*guards the parent. This is used in first step when node set her parent.*/
    uint16_t currentParent = INVALID_ADDR;

    //are there beacon sending?
    bool sendBusy = FALSE;

    //sending beacons
    bool sendingBeacon = FALSE;
    
    /* Tells updateNeighbor that the parent was just evicted.*/ 
    //bool justEvicted = FALSE;

/*  +----------------------+
    |      Node info       |    
    +----------------------+
    |->node address id     |
    |->node address ip     |
    |->number of downwards |
    +----------------------+  */
    table_entry my_info;

    /*guards the total range of ip to distribution ip*/
    uint16_t range = 0;

    /*guards the reserved range of ip to distribution*/
    uint16_t reserved = 0;

    /*guards the current node that must send a ip.*/
    uint16_t iNode = 0;

    message_t controlMsgBuffer;
    message_t beaconMsgBuffer;
    Matrix_routing_header_t* controlMsg;
    Matrix_beacon_header_t* beaconMsg;

    /* routing table -- routing info about neighbors */
    table_entry table[tableSize];
    uint8_t tableActive;

/*  +----------------------+
    |      Ip info         |    
    +----------------------+
    |->node address id     |
    |->node address ip     |
    |->range of ip         |
    +----------------------+  */
    /* routing table temporary -- routing info about late neighbors */
    table_entry_temporary tableTemporary[temporaryTableSize];
    uint8_t tableActiveTemporary;

    task void sendBeaconTask();

    /**********************************************************************************************************************/
    /* 
     For each interval t, you set a timer to fire between t/2 and t
     (chooseAdvertiseTime), and you wait until t (remainingInterval). Once
     you are at t, you double the interval (decayInterval) if you haven't
     reached the max. For reasons such as topological inconsistency, you
     reset the timer to a small value (resetInterval).
    */
    uint32_t minInterval_One = 128;
    uint32_t maxInterval_One = 1000;
    uint8_t k_One = 1;
    uint8_t c_One = 0;

    uint32_t currentInterval_One = 128;
    uint32_t t_One; 
    bool tHasPassed_One;
    /* 
     For each interval t, you set a timer to fire between t/2 and t
     (chooseAdvertiseTime), and you wait until t (remainingInterval). Once
     you are at t, you double the interval (decayInterval) if you haven't
     reached the max. For reasons such as topological inconsistency, you
     reset the timer to a small value (resetInterval).
    */
    uint32_t minInterval_Two = 128;
    uint32_t maxInterval_Two = 1000;
    uint8_t k_Two = 5;
    uint8_t c_Two = 0;

    uint32_t currentInterval_Two = 20;
    uint32_t t_Two; 
    bool tHasPassed_Two;

    /**********************************************************************************************************************/ 
    // forward declarations
    void    tableInit();
    uint8_t tableFind(am_addr_t);
    error_t tableUpdateEntry_Downwards(am_addr_t, uint16_t);
    error_t tableUpdateEntry_Ip(am_addr_t, uint16_t, uint16_t);
    uint8_t tableFindIP(uint16_t ip);

    //late son
    uint8_t tableFind_Temporary(uint16_t node);
    error_t tableUpdateEntry_Temporary(am_addr_t from, uint16_t ip, uint16_t data);
    error_t routingTemporaryTableEvict(am_addr_t node);
    uint8_t tableFindIP_Temporary(uint16_t ip);

    /**********************************************************************************************************************/ 

    void chooseAdvertiseTime_One() {
       t_One = currentInterval_One;
       t_One /= 2;
       t_One += call Random.rand32() % t_One;
       tHasPassed_One = FALSE;
       call TrickleTimerOne.startOneShot(t_One);
    }

    void resetInterval_One() {
      currentInterval_One = minInterval_One;
      c_One = 0;
      chooseAdvertiseTime_One();
    }

    void decayInterval_One() {
        currentInterval_One *= 2;
        if (currentInterval_One > maxInterval_One) {
          currentInterval_One = maxInterval_One;
          c_One++;
        }
      chooseAdvertiseTime_One();
    }

    void remainingInterval_One() {
       uint32_t remaining_One = currentInterval_One;
       remaining_One -= t_One;
       tHasPassed_One = TRUE;
       call TrickleTimerOne.startOneShot(remaining_One);
    }
  
    /**********************************************************************************************************************/

    void chooseAdvertiseTime_Two() {
       t_Two = currentInterval_Two;
       t_Two /= 2;
       t_Two += call Random.rand32() % t_Two;
       tHasPassed_Two = FALSE;
       call TrickleTimerTwo.startOneShot(t_Two);
    }

    void resetInterval_Two() {
      currentInterval_Two = minInterval_Two;
      c_Two = 0;
      chooseAdvertiseTime_Two();
    }

    void decayInterval_Two() {
        currentInterval_Two *= 2;
        if (currentInterval_Two > maxInterval_Two) {
          currentInterval_Two = maxInterval_Two;
          c_Two++;
        }
      chooseAdvertiseTime_Two();
    }

    void remainingInterval_Two() {
       uint32_t remaining_Two = currentInterval_Two;
       remaining_Two -= t_Two;
       tHasPassed_Two = TRUE;
       call TrickleTimerTwo.startOneShot(remaining_Two);
    }

    /**********************************************************************************************************************/

    command error_t Init.init() {
        uint8_t controlMaxLength;
        uint8_t beaconMaxLength;
        setState(NEW_MESSAGE);
        tableInit();
        controlMsg = call ControlSend.getPayload(&controlMsgBuffer, call ControlSend.maxPayloadLength());
        beaconMsg = call BeaconSend.getPayload(&beaconMsgBuffer, call BeaconSend.maxPayloadLength());
        //controlMaxLength = call ControlSend.maxPayloadLength();
        //beaconMaxLength = call BeaconSend.maxPayloadLength();
        //dbg("MatrixTreeRoutingCtl","TreeRouting initialized. (used payload:%d max payload:%d!\n", sizeof(beaconMsg), maxLength);
        return SUCCESS;
    }

    command error_t StdControl.start() {
      my_info.id = call AMPacket.address();
      //start will (re)start the sending of messages
      //Init trickletimer to wait a node estabilish its the stablest parent
      if (!hasState(RUNNING_ON)) {
        setState(RUNNING_ON);
        resetInterval_One();
        /*start up to date table temporary*/
        call UpdateTimer.startPeriodic(MATRIX_UPDATE_INTERVAL);
        dbg("MatrixTreeRoutingCtl","%s running: %d radioOn: %d\n", __FUNCTION__, hasState(RUNNING_ON), hasState(RADIO_ON));
      }     
      return SUCCESS;
    }

    command error_t StdControl.stop() {
        clearState(RUNNING_ON);
        dbg("MatrixTreeRoutingCtl","%s running: %d radioOn: %d\n", __FUNCTION__, hasState(RUNNING_ON), hasState(RADIO_ON));
        return SUCCESS;
    } 

    event void RadioControl.startDone(error_t error) {
        setState(RADIO_ON);
        dbg("MatrixTreeRoutingCtl","%s running: %d radioOn: %d\n", __FUNCTION__, hasState(RUNNING_ON), hasState(RADIO_ON));
    } 

    event void RadioControl.stopDone(error_t error) {
        clearState(RADIO_ON);
        dbg("MatrixTreeRoutingCtl","%s running: %d radioOn: %d\n", __FUNCTION__, hasState(RUNNING_ON), hasState(RADIO_ON));
    }


    event void CtpInfo.parentChanged(am_addr_t newParent) {        
        if(hasState(IP_RECEIVED)) {
            currentParent = newParent;
            if(currentParent != ipParent) {
              sendingBeacon = TRUE;
              if(hasState(RADIO_ON) && hasState(RUNNING_ON)) {
                  post sendBeaconTask();
              }
              call BeaconTimer.startOneShot((MATRIX_BEACON_INTERVAL/2) + (call Random.rand32() % (MATRIX_BEACON_INTERVAL/2)));
            }
            else{
              sendingBeacon = FALSE;
            }
        }
        dbg("MatrixTreeRoutingCtl", "%d parent\n", newParent);
    }

    /* updates the downwards information, using the info that has been received
     * from its beacons. Only one things can cause this info to change: 
     * downward beacons */
    task void updateTemporaryTableTask() {
        uint8_t i;

        for(i = 0 ; i < tableActiveTemporary ; i++) {
            tableTemporary[i].valid = tableTemporary[i].valid >> 1;
            if(!tableTemporary[i].valid) {
                routingTemporaryTableEvict(tableTemporary[i].id);
            }
        }
                       
        dbg("MatrixRouting","%s\n",__FUNCTION__);
    }

    // only posted if running and radioOn
    /* send a beacon advertising this node's Info */
    task void sendAggregationTask() {
        error_t eval;
        
        if (hasState(SENDING)) {
            return;
        }

        //set a flag on message to request a ack 
        if (call PacketAcknowledgements.requestAck(&controlMsgBuffer) == SUCCESS) {
            setState(ACK_PENDING);
        }

        //number of downwards without sons plus number of son from my table size
        controlMsg->options = AGGREGATION_MSG;
        controlMsg->data = my_info.downwards + tableActive;
        //dbg("tty", "%s parent: %d etx: %d\n",__FUNCTION__, ipParent, controlMsg->data);
        
        eval = call ControlSend.send(ipParent, &controlMsgBuffer, sizeof(Matrix_routing_header_t));
        if (eval == SUCCESS) {
            setState(SENDING);
        } else if (eval == EOFF) {
            clearState(RADIO_ON);
            dbg("MatrixTreeRoutingCtl","%s running: %d radioOn: %d\n", __FUNCTION__, hasState(RUNNING_ON), hasState(RADIO_ON));
        }
    }

    /* send a beacon advertising this node's ip Info */
    task void sendDistributionTask() {
        error_t eval;
        
        if (hasState(SENDING)) {
            return;
        }

        //set a flag on message to request a ack 
        if (call PacketAcknowledgements.requestAck(&controlMsgBuffer) == SUCCESS) {
            setState(ACK_PENDING);
        }

        controlMsg->options = DISTRIBUTION_MSG;

        dbg("MatrixRouting", "%s parent: %d etx: %d\n",__FUNCTION__, controlMsg->ip_node, controlMsg->data);
        
        eval = call ControlSend.send(table[iNode].id, &controlMsgBuffer, sizeof(Matrix_routing_header_t));
        if (eval == SUCCESS) {
            setState(SENDING);
        } else if (eval == EOFF) {
            clearState(RADIO_ON);
            dbg("MatrixTreeRoutingCtl","%s running: %d radioOn: %d\n", __FUNCTION__, hasState(RUNNING_ON), hasState(RADIO_ON));
        }
    }

    /* send a beacon advertising this node's ip Info */
    task void sendBeaconTask() {
        error_t eval;
        
        if (sendBusy) {
            return;
        }

        beaconMsg->ip = my_info.ip;
        beaconMsg->range = range;
        //dbg("MatrixRouting", "%s parent: %d etx: %d\n",__FUNCTION__, beaconMsg->ip_node, beaconMsg->data);

        
        eval = call BeaconSend.send(currentParent, &beaconMsgBuffer, sizeof(Matrix_beacon_header_t));
        if (eval == SUCCESS) {
            sendBusy = TRUE;
        } else if (eval == EOFF) {
            clearState(RADIO_ON);
            dbg("MatrixTreeRoutingCtl","%s running: %d radioOn: %d\n", __FUNCTION__, hasState(RUNNING_ON), hasState(RADIO_ON));
        }
    }

    event void RetxmitTimer.fired() {
        clearState(SENDING);
        dbg("MatrixFHangBug", "%s posted sendTask.\n", __FUNCTION__);
        if(!hasState(IP_RECEIVED))
            post sendAggregationTask();
        else
            post sendDistributionTask();
    }

    event void BeaconTimer.fired() {
        if(hasState(RADIO_ON) && hasState(RUNNING_ON)) {
            post sendBeaconTask();
        }

        if(sendingBeacon){
            call BeaconTimer.startOneShot((MATRIX_BEACON_INTERVAL/2) + (call Random.rand32() % (MATRIX_BEACON_INTERVAL/2)));
        }
    }

    event void UpdateTimer.fired() {
        //update temporary table
        if(tableActiveTemporary) {
            post updateTemporaryTableTask();
        }
    }

    void printt() {
        int i;
        dbg("Table","\nIP: %d\t range: %d reserved: %d\n", my_info.ip, range, reserved);
        for(i = 0 ; i < tableActive ; i++) {
            dbg_clear("Table", "filho:%d\t ip:%d\n", table[i].id, table[i].ip);
        }
        dbg_clear("Table","\n");
    }

    event void ControlSend.sendDone(message_t* msg, error_t error) {
        if(error != SUCCESS) {
            /* The radio wasn't able to send the packet: retransmit it. */
            dbg("MatrixTreeRoutingCtl", "%s: send failed\n", __FUNCTION__);
            startRetxmitTimer(R_MATRIX_SENDDONE_FAIL_WINDOW, R_MATRIX_SENDDONE_FAIL_OFFSET);
        }
        else {
            if(hasState(ACK_PENDING) && !call PacketAcknowledgements.wasAcked(msg)) {
                /* No ack and no new message to send: if countdown is not 0, retransmit, else drop the packet. */
                if (--retries) { 
                    dbg("MatrixTreeRoutingCtl", "%s: not acked, retransmit\n", __FUNCTION__);
                    startRetxmitTimer(R_MATRIX_SENDDONE_NOACK_WINDOW, R_MATRIX_SENDDONE_NOACK_OFFSET);
                } else {
                    /* Hit max retransmit threshold: drop the packet. */
                    clearState(SENDING);
                    //startRetxmitTimer(R_SENDDONE_OK_WINDOW, R_SENDDONE_OK_OFFSET);
                    //packetComplete(qe, msg, FALSE);
                }
            }
            else {
                /* Packet was acknowledged. Start timer to send next packet. */
                clearState(SENDING);
                dbg_clear("beacons","%s:enviou:%d:\n",sim_time_string(),TOS_NODE_ID);
                
                if(hasState(IP_SENDING)) {
                    iNode++;
                    if(iNode < tableActive) {
                        controlMsg->data = (((range) * (0.9)) * (table[iNode].downwards + 1)) / (tableActive + my_info.downwards);
                        table[iNode].ip = table[iNode - 1].ip + controlMsg->data - 1;
                        controlMsg->ip_node = table[iNode].ip;
                        retries = R_MATRIX_MAX_RETRIES;
                        post sendDistributionTask();
                    }else {
                        reserved = my_info.ip - table[iNode - 1].ip;
                        clearState(IP_SENDING);
                        setState(IP_SENT);
                        //printt();
                    }
                }
                //packetComplete(qe, msg, TRUE);
            }
        }
    }

    event void BeaconSend.sendDone(message_t* msg, error_t error) {
        if(error != SUCCESS) {
            dbg("MatrixTreeRoutingCtl", "%s: send failed\n", __FUNCTION__);
        }
        else {
            sendBusy = FALSE;
            dbg_clear("beacons","%s:enviou:%d:\n",sim_time_string(),TOS_NODE_ID);
        }
    }

    /**********************************************************************************************************************/

    event void TrickleTimerOne.fired() {
        bool hasParent;
        uint16_t newParent;
        uint16_t etx;

        if(c_One < k_One){
          if(!tHasPassed_One){
            hasParent = call CtpInfo.getParent(&newParent);
            //dbg("Saida", "atual PAI=%d novo PAI=%d hasParent=%d.\n", currentParent, newParent, hasParent);
            if((newParent != currentParent) || hasParent){
              resetInterval_One();
              currentParent = newParent; 
            }       
            else{
              remainingInterval_One();
            }
          }
          else{
            decayInterval_One();
          }
        }
        else{
          ipParent = currentParent;
          call CtpInfo.getEtx(&etx);
          //dbg("tty", "%d:NÓ ESTAVEL de pais ETX=%d:%s my parent %d\n",TOS_NODE_ID, etx, sim_time_string(),ipParent);
          minInterval_Two = minInterval_Two + 5 * minInterval_Two/(etx + 1);
          maxInterval_Two = maxInterval_Two + 5 * maxInterval_Two/(etx + 1);
          //dbg("tty", "%d:TrickleTimerOne stopped! ipParent %d min %d max :%s\n",ipParent,minInterval_One,maxInterval_One,sim_time_string());
          resetInterval_Two();
        }
    }
    
    /**********************************************************************************************************************/

    /*Root do not send message and estabish first to start the dissemination*/
    void trickleTimerTwo_Root(){
      if(c_Two < k_Two){
        if(!tHasPassed_Two){
          remainingInterval_Two();
        }
        else{
          decayInterval_Two();
        }
      }
      else{
        my_info.ip = 65534;
        range = 65534;
        setState(IP_RECEIVED);
        
        if(tableActive){
          //dbg("tty", "NÓ ESTAVEL descendentes:%d\n", my_info.downwards + tableActive);
          controlMsg->data = ((range) * (0.9)) * (table[iNode].downwards + 1) / (tableActive + my_info.downwards); 
          table[iNode].ip = (my_info.ip - range) + controlMsg->data - 1;
          controlMsg->ip_node = table[iNode].ip;
          /*start distribution to whole topology*/
          setState(IP_SENDING);
          retries = R_MATRIX_MAX_RETRIES;
          post sendDistributionTask();
        }

      }
    }

    /*Not root must send message to update the information of its parent*/
    void trickleTimerTwo_noRoot(){
      if(!hasState(IP_RECEIVED)){
        if(!tHasPassed_Two){
          if(hasState(NEW_MESSAGE) && hasState(RADIO_ON) && hasState(RUNNING_ON)){
            //set the send to retransmit the messsage case no ack
            retries = R_MATRIX_MAX_RETRIES;
            post sendAggregationTask();
            clearState(NEW_MESSAGE);
          }
          remainingInterval_Two();
        }
        else{
          decayInterval_Two();
        }
      }
    }

    /*choose between the trickle from non root and root*/
    event void TrickleTimerTwo.fired() {
        if(call RootControl.isRoot()){
            trickleTimerTwo_Root();
        }
        else{
            trickleTimerTwo_noRoot();
        }
    }

    /**********************************************************************************************************************/

    Matrix_routing_header_t* getHeader(message_t* ONE m) {
      return (Matrix_routing_header_t*)call BeaconSend.getPayload(m, call BeaconSend.maxPayloadLength());
    }
    
    /**********************************************************************************************************************/
    /* Handle the receiving of control message and beacon messages from the neighbors. We update the
     * table*/
     
    event message_t* ControlReceive.receive(message_t* msg, void* payload, uint8_t len) {
        am_addr_t from;
        Matrix_routing_header_t* rcvControl;

        // Received a control, but it's not from us.
        if (len != sizeof(Matrix_routing_header_t)) {
            dbg("MatrixLITest", "%s, received control message of size %hhu, expected %i\n", __FUNCTION__, len, (int)sizeof(Matrix_routing_header_t));
            return msg;
        }
        
        //need to get the am_addr_t of the source
        from = call AMPacket.source(msg);
        rcvControl = (Matrix_routing_header_t*)payload;

        //dbg("MatrixRouting","%s from: %d  [ parent: %d downwards: %d]\n", __FUNCTION__, from, rcvControl->ip_node, rcvControl->data);
                
        switch(rcvControl->options){
            
            case AGGREGATION_MSG:
                /*reset the trickle timer two to minimal interval and set c_Two to 0*/
                //if was a new son then will entry its on table, else just update information. Set newBeaconMessage if was possible
                if(!hasState(IP_RECEIVED)){
                    resetInterval_Two();
                    if(FAIL != tableUpdateEntry_Downwards(from, rcvControl->data)){
                        setState(NEW_MESSAGE);
                    }
                }else{
                    if(FAIL != tableUpdateEntry_Downwards(from, rcvControl->data)) {
                        if(!hasState(IP_SENDING)){
                            controlMsg->data = reserved * (0.1);
                            reserved -= controlMsg->data; 
                            table[iNode].ip = table[iNode - 1].ip + controlMsg->data - 1;
                            controlMsg->ip_node = table[iNode].ip;
                            /*start to distribution to his son*/
                            retries = R_MATRIX_MAX_RETRIES;
                            post sendDistributionTask();
                        }
                    }
                }
                break;

            case DISTRIBUTION_MSG:
                if(!hasState(IP_RECEIVED)){
                    my_info.ip = rcvControl->ip_node;
                    range = rcvControl->data - 1;        
                    setState(IP_RECEIVED);
                    //dbg("tty", "NÓ ESTAVEL descendentes:%d\n", my_info.downwards + tableActive);
                    if(tableActive){
                        controlMsg->data = ((range) * (0.9)) * (table[iNode].downwards + 1)/(tableActive + my_info.downwards); 
                        table[iNode].ip = (my_info.ip - range) + controlMsg->data - 1;
                        controlMsg->ip_node = table[iNode].ip;
                        /*start to distribution to his son*/
                        setState(IP_SENDING);
                        retries = R_MATRIX_MAX_RETRIES;
                        post sendDistributionTask();
                    }
                }
                break;

        }

        return msg;
    }
    
    event message_t* BeaconReceive.receive(message_t* msg, void* payload, uint8_t len) {
        am_addr_t from;
        Matrix_beacon_header_t* rcvBeacon;

        // Received a beacon, but it's not from us.
        if (len != sizeof(Matrix_beacon_header_t)) {
            dbg("MatrixLITest", "%s, received control message of size %hhu, expected %i\n", __FUNCTION__, len, (int)sizeof(Matrix_beacon_header_t));
            return msg;
        }
        
        //need to get the am_addr_t of the source
        from = call AMPacket.source(msg);
        rcvBeacon = (Matrix_beacon_header_t*)payload;

        //if beacon was not from my son
        if(tableActive == tableFind(from)) {
            //update entry temporary table
            tableUpdateEntry_Temporary(from, rcvBeacon->ip, rcvBeacon->range);
        }
        //else do nothing

        return msg;
    }

    /* Interface MatrixUnicastNameFreeRouting */
    /* Simple implementation: return the current routeInfo */
    
    command uint16_t MatrixUnicastNameFreeRouting.myIp() {
        if(hasState(IP_RECEIVED)) {
            return my_info.ip;
        }else{
            return INVALID_ADDR_IP;
        }
    }   

    command bool MatrixUnicastNameFreeRouting.directionToSend(uint16_t ip) {
        /*ip not from my range, send to parent*/
        if (ip > my_info.ip || (ip < (my_info.ip - range)))
            return TRUE;
        else
            return FALSE;
    }

    command am_addr_t MatrixUnicastNameFreeRouting.nextHop(uint16_t ip) {
        uint8_t idx = tableFindIP(ip);
        if(idx == tableActive) {
            /*ip not found, return invalid address*/
            return INVALID_ADDR;
        }else{
            /*ip found, next hop id from a node in table*/
            return table[idx].id;
        }    
    }

    command am_addr_t MatrixUnicastNameFreeRouting.nextHopTemporary(uint16_t ip) {
        uint8_t idx;
        if(tableActiveTemporary) {
            idx = tableFindIP_Temporary(ip);    
            if(idx == tableActiveTemporary) {
                return INVALID_ADDR;
            }else{
                return tableTemporary[idx].id;
            }  
        }else{
            return INVALID_ADDR;
        }
    }

    command bool MatrixUnicastNameFreeRouting.hasRoute() {
        return (currentParent != INVALID_ADDR);
    }

    /*Must be implemented after*/
    /* MatrixInfo interface */
    
    command error_t MatrixInfo.getParent(am_addr_t* parent) {
        if (parent == NULL) 
            return FAIL;
        if (currentParent == INVALID_ADDR)    
            return FAIL;
        *parent = currentParent;
        return SUCCESS;
    }

    command uint16_t MatrixInfo.myIp() {
        if(hasState(IP_RECEIVED)) {
            return my_info.ip;
        }else{
            return INVALID_ADDR_IP;
        }
    }

    command uint8_t MatrixInfo.numNeighbors() {
      return tableActive;
    }

    command uint8_t MatrixInfo.numNeighborsTemporary() {
      return tableActiveTemporary;
    }

    command am_addr_t MatrixInfo.getNeighborAddr(uint8_t n) {
      return (n < tableActive)? table[n].id:AM_BROADCAST_ADDR;
    }
    //(1)

    /************************************************************/
    /* Matrix State Functions                                   */
    
    void clearState(uint8_t state) {
      forwardingState = forwardingState & ~state;
    }
    bool hasState(uint8_t state) {
      return forwardingState & state;
    }
    void setState(uint8_t state) {
      forwardingState = forwardingState | state;
    }
    
    /*********** end Matrix State functions ********************/
    
    static void startRetxmitTimer(uint16_t window, uint16_t offset) {
        uint16_t r = call Random.rand16();
        r %= window;
        r += offset;
        call RetxmitTimer.startOneShot(r);
        dbg("MatrixTreeRoutingCtl", "Rexmit timer will fire in %hu ms\n", r);
    }
    
    /************************************************************/
    /* Routing Table Functions                                  */

    /* The routing table keeps info about neighbor's route_info,
     * and is used when choosing a parent.
     * The table is simple: 
     *   - not fragmented (all entries in 0..routingTableActive)
     *   - not ordered
     *   - no replacement: eviction follows the LinkEstimator table
     */

    void tableInit() {
        tableActive = 0;
        tableActiveTemporary = 0;
    }

    /* Returns the index of downward in the table or
     * TableActive if not found */
    uint8_t tableFind(am_addr_t node) {
        uint8_t i;
        if (node == INVALID_ADDR)
            return tableActive;
        for (i = 0; i < tableActive; i++) {
            if (table[i].id == node)
                break;
        }
        return i;
    }
  
    error_t tableUpdateEntry_Downwards(am_addr_t from, uint16_t data) {
        uint8_t idx;
        uint16_t aux;

        idx = tableFind(from);
        if (idx == tableSize) {
            //not found and table is full
            dbg("MatrixRouting", "%s FAIL, table downwards full\n", __FUNCTION__);
            return FAIL;
        }
        else if (idx == tableActive) {
            //not found and there is space
    	      table[idx].id = from;
    	      table[idx].downwards = data;
    	      tableActive++;
            //up to date my information about a number of downwards from my sons
            my_info.downwards += data; 
    	      dbg("MatrixRouting", "%s OK,table downwards new entry\n", __FUNCTION__);
        } else {
            //found, just update
            aux = table[idx].downwards;
            table[idx].downwards = data;
            //up to date my information about a number of downwards from my sons
            my_info.downwards += (data - aux); 
        	  dbg("MatrixRouting", "%s OK, updated table downwards entry\n", __FUNCTION__);
        }
        return SUCCESS;
    }

    /* Returns the index of ip in the table or
     * TableActive if not found */
    uint8_t tableFindIP(uint16_t ip) {
        uint8_t i;
        for (i = 0 ; i < tableActive ; i++) {
            if (table[i].ip >= ip)
                break;
        }
        return i;
    }

    /* Returns the index of ip in the temporary table or
     * TableActive if not found */
    uint8_t tableFind_Temporary(uint16_t node) {
        uint8_t i;
        if (node == INVALID_ADDR)
            return tableActiveTemporary;
        for (i = 0 ; i < tableActiveTemporary ; i++) {
            if (tableTemporary[i].id == node)
                break;
        }
        return i;
    } 
    
    error_t tableUpdateEntry_Temporary(am_addr_t from, uint16_t ip, uint16_t data) {
        uint8_t idx;

        idx = tableFind_Temporary(from);
        if (idx == temporaryTableSize) {
            //not found and table is full
            dbg("MatrixRouting", "%s FAIL, table temporary full\n", __FUNCTION__);
            return FAIL;
        }
        else if (idx == tableActiveTemporary) {
            //not found and there is space
            tableTemporary[idx].id = from;
            tableTemporary[idx].ip = ip;
            tableTemporary[idx].range = data;
            tableTemporary[idx].valid = 0x4;
            tableActiveTemporary++;
            dbg("MatrixRouting", "%s OK, table temporary new entry\n", __FUNCTION__);
        } else {
            //found, just update
            tableTemporary[idx].valid = 0x4;
            dbg("MatrixRouting", "%s OK, updated table temporary entry\n", __FUNCTION__);
        }
        return SUCCESS;
    }

    /* Returns the index of ip in the table or
     * tableActiveTemporary if not found */
    uint8_t tableFindIP_Temporary(uint16_t ip) {
        uint8_t i;
        for (i = 0; i < tableActiveTemporary ; i++) {
            if ((ip > tableTemporary[i].ip) || (ip < (tableTemporary[i].ip - tableTemporary[i].range)))
                break;
        }
        return i;
    }
    
    /* if this gets expensive, introduce indirection through an array of pointers */

    error_t routingTemporaryTableEvict(am_addr_t node) {
        uint8_t idx,i;
        idx = tableFind_Temporary(node);
        if (idx == tableActiveTemporary) 
            return FAIL;
        tableActiveTemporary--;
        for (i = idx; i < tableActiveTemporary; i++) {
            tableTemporary[i] = tableTemporary[i+1];    
        } 
        return SUCCESS; 
    }


    /*********** end routing table functions ***************/

    /*Another interface that I don not know if a have to implemet*/
    /*
    
    command bool MatrixRoutingPacket.getOption(message_t* msg, Matrix_options_t opt) {
      return ((getHeader(msg)->options & opt) == opt) ? TRUE : FALSE;
    }

    command void MatrixRoutingPacket.setOption(message_t* msg, Matrix_options_t opt) {
      getHeader(msg)->options |= opt;
    }

    command void MatrixRoutingPacket.clearOption(message_t* msg, Matrix_options_t opt) {
      getHeader(msg)->options &= ~opt;
    }

    command void MatrixRoutingPacket.clearOptions(message_t* msg) {
      getHeader(msg)->options = 0;
    }

    command am_addr_t     MatrixRoutingPacket.getParent(message_t* msg) {
      return getHeader(msg)->ip_node;
    }
    command void          MatrixRoutingPacket.setParent(message_t* msg, am_addr_t addr) {
      getHeader(msg)->ip_node = addr;
    }

    command uint8_t MatrixInfo.numNeighbors() {
      return tableActive;
    }
    
    //(3)
    
    command am_addr_t MatrixInfo.getNeighborAddr(uint8_t n) {
      return (n < tableActive)? table[n].id:AM_BROADCAST_ADDR;
    }
    */
} 

//(1)
    /*
    command void MatrixInfo.recomputeRoutes() {
      post updateRouteTask();
    }

    command void MatrixInfo.triggerRouteUpdate() {
      resetInterval();
     }

    command void MatrixInfo.triggerImmediateRouteUpdate() {
      resetInterval();
    }

    command void MatrixInfo.setNeighborCongested(am_addr_t n, bool congested) {
        uint8_t idx;    
        if (ECNOff)
            return;
        idx = routingTableFind(n);
        if (idx < routingTableActive) {
            routingTable[idx].info.congested = congested;
        }
        if (routeInfo.congested && !congested) 
            post updateRouteTask();
        else if (routeInfo.parent == n && congested) 
            post updateRouteTask();
    }

    command bool MatrixInfo.isNeighborCongested(am_addr_t n) {
        uint8_t idx;    

        if (ECNOff) 
            return FALSE;

        idx = routingTableFind(n);
        if (idx < routingTableActive) {
            return routingTable[idx].info.congested;
        }
        return FALSE;
    }
    
    default event void Routing.noRoute() {
    }
    
    default event void Routing.routeFound() {
    }
    */

    //(3)
    /*
    command uint16_t MatrixInfo.getNeighborLinkQuality(uint8_t n) {
      return (n < routingTableActive)? call LinkEstimator.getLinkQuality(routingTable[n].neighbor):0xffff;
    }
    command uint16_t MatrixInfo.getNeighborRouteQuality(uint8_t n) {
      return (n < routingTableActive)? call LinkEstimator.getLinkQuality(routingTable[n].neighbor) + routingTable[n].info.etx:0xfffff;
    }
    */
