/*
 * testPin.c
 *
 *  Created on: Sep 29, 2025
 *      Author: User
 */



#include "unity.h"
#include "GPin.h"
#include "mock_gpio.h"

void test_GPIO_SetPinOutput_should_call_GPIO_setDirectionMode_OUT(void)
{
    uint8_t testPin = 1;
    GPIO_setDirectionMode_Expect(testPin,GPIO_DIR_MODE_OUT);
    GPIO_SetPinOutput(testPin);
}

void test_GPIO_SetPinInput_should_call_GPIO_setDirectionMode_IN(void)
{
    uint8_t testPin = 2;
    GPIO_setDirectionMode_Expect(testPin, GPIO_DIR_MODE_IN);
    GPIO_SetPinInput(testPin);
}

void test_GPIO_ReadInputusecase(void)
{

}

void test_GPIO_WriteInputusecase(void)
{

}

