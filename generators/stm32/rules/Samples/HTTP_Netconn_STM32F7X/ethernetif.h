#ifndef __ETHERNETIF_H__
#define __ETHERNETIF_H__


#include "lwip/err.h"
#include "lwip/netif.h"
#include "cmsis_os.h"

#ifdef __cplusplus
extern "C"
{
#endif

err_t ethernetif_init(struct netif *netif);
void ETHERNET_IRQHandler(void);
u32_t sys_now(void);

#ifdef __cplusplus
}
#endif

#endif
