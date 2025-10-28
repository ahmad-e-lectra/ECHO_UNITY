/*
 * driverlib_led_wrapper.h
 *
 *  Created on: Oct 1, 2025
 *      Author: User
 */

#ifndef LED_EX1_BLINKY_TESTS_TEST_SUPPORT_DRIVERLIB_LED_WRAPPER_H_
#define LED_EX1_BLINKY_TESTS_TEST_SUPPORT_DRIVERLIB_LED_WRAPPER_H_

#ifdef TEST
  #include "mock_fake_driverLib_led.h"
#else
  #include "driverlib/gpio.h"
#endif




#endif /* LED_EX1_BLINKY_TESTS_TEST_SUPPORT_DRIVERLIB_LED_WRAPPER_H_ */
