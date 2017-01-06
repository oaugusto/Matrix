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

interface MatrixUnicastNameFreeRouting {

  /**
   * Get the address of the best next hop set to the destination.
   * If there is not best next hop, the address is the local address.
   * @return : The next best hop, or the local address if there is no route.
   */
  command uint16_t myIp();
  command bool hasRoute();
  command bool directionToSend(uint16_t ip);
  command am_addr_t nextHop(uint16_t ip);
  command am_addr_t nextHopTemporary(uint16_t ip);
  
  //event void routeFound();
  //event void noRoute();
}

