module ModuleTestC {
    uses{
        interface Boot;
        interface SplitControl as RadioControl;
        interface Leds;
        interface RootControl;
        interface StdControl as RoutingControl;

        interface Send;
        interface Receive;
        interface CtpPacket;

        interface Timer<TMilli> as timerOne;
        interface Timer<TMilli> as timerTwo;
        interface Timer<TMilli> as timerThree;

        interface Random;
        interface MatrixUnicastNameFreeRouting;
        interface StdControl as CoinControl;
    }
}

implementation {
  message_t packet;
  bool sendBusy = FALSE;
  
  enum {
    COUNT         =    10,
    INVALID       = 65535,
    MAX           =    90, 
    INITSEND      = 90000,   
    ROOT          = 65534,
  };
 
  typedef nx_struct MatrixMsg {
    nx_uint32_t data;
  } MatrixMsg;

  MatrixMsg* Msg;

  uint16_t buffer[MAX];
  uint8_t init = 0;
  uint8_t final = 0;

  bool sendInit = FALSE;

  uint32_t sendINTERVAL = 60000;
 
  uint32_t seqNo[100];
  uint32_t counter = 1;

  void insertIP(uint16_t ip) {
    atomic {
      if(((final + 1) % MAX) != init) {
          buffer[final] = ip;
          final = ( final + 1 ) % MAX;
      }
    }
  }

  uint16_t getHeaderIP() {
    if(final != init) {
      return buffer[init];
    }else {
      return INVALID;
    }
  }

  void removeIP(){
    atomic {
      if(final != init) {
        init= ( init + 1 ) % MAX ;
      }
    }
  }

  event void Boot.booted(){
      uint8_t i;
      Msg = (MatrixMsg*)call Send.getPayload(&packet, sizeof(MatrixMsg));
      //dbg("booted,tty","%d:Booted:%s\n", TOS_NODE_ID, sim_time_string());
      dbg("booted","%d:Booted:%s\n", TOS_NODE_ID, sim_time_string());
      call RadioControl.start();

      for(i = 0; i < 100; i++) {
    	seqNo[i] = 0;
      }
  }

  event void RadioControl.startDone(error_t err) {
    if (err != SUCCESS)
      call RadioControl.start();
    else {
      call RoutingControl.start();
      if (TOS_NODE_ID == 1){ 
        call RootControl.setRoot();
        sendINTERVAL = 1000;
      }
    }
    if(!sendInit) {
      sendInit = TRUE;
      call timerOne.startOneShot(INITSEND + (call Random.rand32() % (INITSEND/2)));
      call timerThree.startOneShot(40000);
    }
  }

  event void timerThree.fired() {
      call CoinControl.start();
  }

  event void RadioControl.stopDone(error_t err) { }

  task void sendMessage() {
    uint16_t iP;
    if(!sendBusy) { 
      iP = getHeaderIP();
      if(iP != INVALID) {
        Msg->data = counter;
        call CtpPacket.setIp(&packet, iP);
        if (call Send.send(&packet, sizeof(MatrixMsg)) != SUCCESS) {
          //dbg("Message_App,tty", "%d:enviou: My ip:%d! Timer:%s\n",TOS_NODE_ID, call MatrixInfo.myIp(), sim_time_string());
          call Leds.led0On();
        }
        else{
          sendBusy = TRUE;
        }
      }
    }
    call timerTwo.startOneShot(sendINTERVAL + (call Random.rand32() % sendINTERVAL));
  }

  event void timerOne.fired() { 
    uint8_t i;
    if(!(call RootControl.isRoot())) {
      for(i = 0; i < COUNT; i++) {
        insertIP(ROOT);
      }
    }
    post sendMessage();
  }

  event void timerTwo.fired() { 
      post sendMessage();
  }

  event void Send.sendDone(message_t* msg, error_t error) { 
    if (error != SUCCESS) {
      call Leds.led0On();
    }else {
      removeIP();
      //if(TOS_NODE_ID != 1)
      dbg("Message_App", "SENT :%s\n", sim_time_string());
      //dbg("Message_App", "SENT\n");
      counter++;
    }
    sendBusy = FALSE;
  }

  event message_t* Receive.receive(message_t* msg, void* payload, uint8_t len) {
    MatrixMsg* testing;
    uint16_t origem;
    testing = (MatrixMsg*) payload;
    origem = (uint16_t)call CtpPacket.getOrigin(msg);
        
    if(seqNo[origem-1] < testing->data) {
	    seqNo[origem-1] = testing->data;
    
        if(call RootControl.isRoot()) {
   	     insertIP(call CtpPacket.getIpOrigin(msg));
	}

    	dbg("Receive_App", "RECEIVED from %d : ip %d : %s\n", origem, call CtpPacket.getIpOrigin(msg), sim_time_string());
    }
    return msg;
  }

}
