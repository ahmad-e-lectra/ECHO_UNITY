/*
 * fake_driverLib_Led.h
 *
 *  Created on: Oct 1, 2025
 *      Author: User
 */

#ifndef LED_EX1_BLINKY_TESTS_TEST_SUPPORT_FAKE_DRIVERLIB_LED_H_
#define LED_EX1_BLINKY_TESTS_TEST_SUPPORT_FAKE_DRIVERLIB_LED_H_


#include "stdint.h"
#include "stdbool.h"


void SysCtl_delay(uint32_t count);
//*****************************************************************************
//
// The ASSERT macro, which does the actual assertion checking.  Typically, this
// will be for procedure arguments.
//
//*****************************************************************************
#define ASSERT(expr) do                                                       \
                     {                                                        \
                         if(!(expr))                                          \
                         {                                                    \
                             __error__(__FILE__, __LINE__);                   \
                         }                                                    \
                     }                                                        \
                     while((_Bool)0)

//
// Define to isolate inline assembly
//
#define SYSCTL_DELAY        __asm(" .if __TI_EABI__\n"                         \
                                  " .asg    SysCtl_delay    , _SysCtl_delay\n" \
                                  " .endif\n"                                  \
                                  " .def _SysCtl_delay\n"                      \
                                  " .sect \".TI.ramfunc\"\n"                   \
                                  " .global  _SysCtl_delay\n"                  \
                                  "_SysCtl_delay:\n"                           \
                                  " SUB    ACC,#1\n"                           \
                                  " BF     _SysCtl_delay, GEQ\n"               \
                                  " LRETR\n")


#define DEVICE_GPIO_PIN_LED1        31U             // GPIO number for LED1
#define DEVICE_SYSCLK_FREQ          ((DEVICE_OSCSRC_FREQ * 48) / (2 * 4 * 1))
#define GPIODATA_BASE             0x00007F00U
#define GPIO_O_GPBDAT      0x8U    // GPIO B Data Register (GPIO32 to 63)
#define GPIO_O_GPADAT      0x0U    // GPIO A Data Register (GPIO0 to 31)

//
// 20MHz XTAL on controlCARD is used as the PLL source.
// For use with SysCtl_getClock().
//
#define DEVICE_OSCSRC_FREQ          20000000U

//
// 120MHz SYSCLK frequency based on the above DEVICE_SETCLOCK_CFG. Update the
// code below if a different clock configuration is used!
//
#define DEVICE_SYSCLK_FREQ          ((DEVICE_OSCSRC_FREQ * 48) / (2 * 4 * 1))


//*****************************************************************************
//
// Macro to call SysCtl_delay() to achieve a delay in microseconds. The macro
// will convert the desired delay in microseconds to the count value expected
// by the function. \b x is the number of microseconds to delay.
//
//*****************************************************************************
#define DEVICE_DELAY_US(x) SysCtl_delay(((((long double)(x)) / (1000000.0L /  \
                              (long double)DEVICE_SYSCLK_FREQ)) - 9.0L) / 5.0L)


//*****************************************************************************
//
// Useful defines used within the driver functions to access gpio registers.
// Not intended for use by application code.
//
// Divide by 2 is for C28x which has word access
//
//*****************************************************************************
#define GPIO_DATA_REGS_STEP     ((GPIO_O_GPBDAT - GPIO_O_GPADAT) / 2U)

//*****************************************************************************
//
//! \internal
//! Checks that a pin number is valid for a device.
//!
//! Note that this function reflects the highest possible GPIO number of a
//! device on its biggest package. Check the datasheet to see what the actual
//! range of valid pin numbers is for a specific package.
//!
//! \return None.
//
//*****************************************************************************
static inline bool GPIO_isPinValid(uint32_t pin);

//*************************************************************************************************
//
// The following are defines for the GPIO register offsets
//
//*************************************************************************************************
#define GPIO_O_GPASET      0x2U    // GPIO A Data Set Register (GPIO0 to 31)
#define GPIO_O_GPACLEAR    0x4U    // GPIO A Data Clear Register (GPIO0 to 31)


//*****************************************************************************
//
// Useful defines used within the driver functions to access gpio registers.
// Not intended for use by application code.
//
// Divide by 2 is for C28x which has word access
//
//*****************************************************************************
#define GPIO_GPxCLEAR_INDEX     (GPIO_O_GPACLEAR / 2U)
#define GPIO_GPxSET_INDEX       (GPIO_O_GPASET / 2U)

void GPIO_writePin(uint32_t pin, uint32_t outVal);

#endif /* LED_EX1_BLINKY_TESTS_TEST_SUPPORT_FAKE_DRIVERLIB_LED_H_ */
