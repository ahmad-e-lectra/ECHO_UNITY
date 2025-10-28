
#ifndef BLINKY_H
#define BLINKY_H

#include "driverlib_led_wrapper.h"

void LedTwitch_off(uint32_t pin);
void LedTwitch_on(uint32_t pin);
void LedTwitch_start(void);
void LedTwitch_stop(void);

#endif // BLINKY_H
