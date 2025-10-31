#ifndef GPIO_H
#define GPIO_H

#ifdef __cplusplus
extern "C"
{
#endif

// Quali implicazioni pratiche ci sono usando tipi diversi da quelli dell'architettura reale?
#include "stdint.h"


void SysCtl_delay(uint32_t count);
void GPIO_writePin(uint32_t pin, uint32_t val);

uint32_t GPIO_readPin(uint32_t pin);

#ifdef __cplusplus
}
#endif

#endif
