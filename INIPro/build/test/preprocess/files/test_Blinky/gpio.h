// CEEDLING NOTICE: This generated file only to be consumed by CMock

#ifndef _GPIO_H_ // Ceedling-generated include guard
#define _GPIO_H_

#include "stdint.h"

void SysCtl_delay(uint32_t count);
void GPIO_writePin(uint32_t pin, uint32_t val);

uint32_t GPIO_readPin(uint32_t pin);

#endif // _GPIO_H_
