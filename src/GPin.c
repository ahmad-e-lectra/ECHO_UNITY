/*
 * GPIO.c
 *
 *  Created on: Sep 29, 2025
 *      Author: User
 */



#include"GPin.h"


void GPIO_SetPinOutput(uint8_t Pin)
{
    GPIO_setDirectionMode(Pin, GPIO_DIR_MODE_OUT);

}


void GPIO_SetPinInput(uint8_t Pin)
{

    GPIO_setDirectionMode(Pin, GPIO_DIR_MODE_IN);

}

void GPIO_ReadInput(uint8_t Pin){}
void GPIO_WriteInput(uint8_t Pin){}
