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
XMatrix (an extension of Matrix) and RPL, when it comes to any-to-any data
communication, in terms of reliability, message efficiency and memory footprint.

###Authors:
 * @author Bruna Soares Peres <bperes@dcc.ufmg.br>
 * @author Bruno Pereira dos Santos <bruno.ps@dcc.ufmg.br>
 * @author Otávio Augusto de Oliveira Souza <oaugusto@outlook.com>
 * @author Edson Roteia Araujo Junior <junioroteia@gmail.com>
 * @author Luiz Filipe M. Vieira <lfvieira@dcc.ufmg.br>
 * @author Marcos Augusto M. Vieira <mmvieira@dcc.ufmg.br>
 * @author Olga Nikolaevna Goussevskaia <olga@dcc.ufmg.br>
 * @date August 04 2016
*/
#ifndef MATRIX_ROUTING_H
#define MATRIX_ROUTING_H


enum {
    //AM_TREE_ROUTING_CONTROL = 0xCE,
    //MATRIX_BEACON_INTERVAL = 8192,
    //MATRIX_BEACON_INTERVAL = 1000, 
    MATRIX_BEACON_INTERVAL = 60000, 
    //MATRIX_UPDATE_INTERVAL = 1000,
    MATRIX_UPDATE_INTERVAL = 60000,
    //PARENT_SWITCH_THRESHOLD = 15,
    //MAX_METRIC = 0xFFFF,
};

enum {
    INVALID_ADDR_IP     = 65535,  
};

/* 
  * These timings are in milliseconds, and are used by
  * MatrixRountingEngineP. The MatrixRoutingEngine uses these
  * values to determine when to send the next packet after an
  * event. FAIL refers to a send fail (an error from the radio below),
  * NOACK refers to the previous packet not being acknowledged,
  * OK refers to an acknowledged packet, and LOOPY refers to when
  * a loop is detected.
  *
  * These timings are defined in terms of packet times. Currently,
  * two values are defined: for CC2420-based platforms (4ms) and
  * all other platfoms (32ms). 
  */

enum {
  #if PLATFORM_MICAZ || PLATFORM_TELOSA || PLATFORM_TELOSB || PLATFORM_TMOTE || PLATFORM_INTELMOTE2 || PLATFORM_SHIMMER || PLATFORM_IRIS
    R_MATRIX_ROUTING_PACKET_TIME = 7,
  #else
    R_MATRIX_ROUTING_PACKET_TIME = 32,
  #endif
};

enum {
    R_MATRIX_SENDDONE_OK_OFFSET        = R_MATRIX_ROUTING_PACKET_TIME,
    R_MATRIX_SENDDONE_OK_WINDOW        = R_MATRIX_ROUTING_PACKET_TIME,
    R_MATRIX_SENDDONE_NOACK_OFFSET     = R_MATRIX_ROUTING_PACKET_TIME,
    R_MATRIX_SENDDONE_NOACK_WINDOW     = R_MATRIX_ROUTING_PACKET_TIME,
    R_MATRIX_SENDDONE_FAIL_OFFSET      = R_MATRIX_ROUTING_PACKET_TIME  << 2,
    R_MATRIX_SENDDONE_FAIL_WINDOW      = R_MATRIX_SENDDONE_FAIL_OFFSET,
    R_MATRIX_LOOPY_OFFSET              = R_MATRIX_ROUTING_PACKET_TIME  << 2,
    R_MATRIX_LOOPY_WINDOW              = R_MATRIX_LOOPY_OFFSET,
    R_MATRIX_NO_ROUTE_RETRY            = 10000
};

/* 
* The number of times will try to transmit a packet 
* before giving up if the link layer supports 
* acknowledgments. If the link layer does not 
* support acknowledgments it sends the packet once.
*/
enum {
    R_MATRIX_MAX_RETRIES = 30
};

/*guards information about a node take as downward*/
typedef struct {
  uint16_t id;
  uint16_t ip;
  uint16_t downwards;
} table_entry;

/*guards information about a temporary node take as downward*/
typedef struct {
  uint16_t id;
  uint16_t ip;
  uint16_t range;
  uint8_t  valid;
} table_entry_temporary;

#endif
