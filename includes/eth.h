
#ifndef ETH_H
#define ETH_H

#include <dtypes.h>

typedef struct ether_t
{
	macaddr_t dest;
	macaddr_t src;
	prot_t protocol;
}eth_t;



#endif
