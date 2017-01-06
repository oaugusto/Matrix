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

#include "AM.h"

interface MatrixInfo {

  /**
   * Get the parent of the node in the tree.  The pointer is allocated
   * by the caller.  If the parent is invalid, return FAIL.  The
   * caller MUST NOT use the value in parent if the return is not
   * SUCCESS.
   */
  
  command error_t getParent(am_addr_t* parent);

  //must be removed
  command uint16_t myIp();
  
  /**
   * This informs the routing engine that sending a beacon soon is
   * advisable, e.g., in response to a pull bit.
   */
  
  //command void triggerRouteUpdate();

  /**
   * This informs the routing engine that sending a beacon as soon
   * as possible is advisable, e.g., due to queue overflow or
   * a detected loop.
   */
  //command void triggerImmediateRouteUpdate();

  /** 
   * Tell the routing engine it might want to recompute its routes.
   */
  //command void recomputeRoutes();

  /**
   * Informs the routing engine that a neighbor is congested
   */
  //command void setNeighborCongested(am_addr_t n, bool congested);

  /**
   *  Returns the currently known state about a neighbor's congestion state
   */
  //command bool isNeighborCongested(am_addr_t n);

  command uint8_t numNeighbors();

  command uint8_t numNeighborsTemporary();
  
  command am_addr_t getNeighborAddr(uint8_t n);
}
