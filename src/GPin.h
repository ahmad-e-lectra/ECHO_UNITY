/*
 * GPIO.h
 *
 *  Created on: Sep 29, 2025
 *      Author: User
 */

#ifndef LED_EX1_BLINKY_TESTS_INC_PINTEST_H_
#define LED_EX1_BLINKY_TESTS_INC_PINTEST_H_

#include"gpio.h"


void GPIO_SetPinOutput(uint8_t Pin);
void GPIO_SetPinInput(uint8_t Pin);
void GPIO_ReadInput(uint8_t Pin);
void GPIO_WriteInput(uint8_t Pin);



#endif /* LED_EX1_BLINKY_TESTS_INC_PINTEST_H_ */
