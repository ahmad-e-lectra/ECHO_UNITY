#ifndef GPIO_H
#define GPIO_H

#ifdef __cplusplus
extern "C"
{
#endif

// Quali implicazioni pratiche ci sono usando tipi diversi da quelli dell'architettura reale?
#include "stdint.h"

typedef enum
{
    GPIO_DIR_MODE_IN,                   //!< Pin is a GPIO input
    GPIO_DIR_MODE_OUT                   //!< Pin is a GPIO output
} GPIO_Direction;

void SysCtl_delay(uint32_t count);
void GPIO_writePin(uint32_t pin, uint32_t val);
void
GPIO_setDirectionMode(uint32_t pin, GPIO_Direction pinIO);
uint32_t GPIO_readPin(uint32_t pin);

#ifdef __cplusplus
}
#endif

#endif
