
#ifndef DTYPES_H
#define DTYPES_H

#include <stdint.h>
#include <linux/if_ether.h>

#define HWADDR_LEN ETH_ALEN

typedef uint8_t OCTET; 

typedef OCTET[HWADDR_LEN] macaddr_t;

typedef enum prot
{
	PROT_IP = ETH_P_IP,
}prot_t;

#endif
