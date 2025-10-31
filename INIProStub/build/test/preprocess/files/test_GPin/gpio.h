// CEEDLING NOTICE: This generated file only to be consumed by CMock

#ifndef _GPIO_H_ // Ceedling-generated include guard
#define _GPIO_H_

#include "stdint.h"

typedef enum
{
    GPIO_DIR_MODE_IN,
    GPIO_DIR_MODE_OUT
} GPIO_Direction;

void SysCtl_delay(uint32_t count);
void GPIO_writePin(uint32_t pin, uint32_t val);
void
GPIO_setDirectionMode(uint32_t pin, GPIO_Direction pinIO);
uint32_t GPIO_readPin(uint32_t pin);

#endif // _GPIO_H_
