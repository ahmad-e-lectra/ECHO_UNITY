// CEEDLING NOTICE: This generated file only to be consumed for test runner creation

#include "build/vendor/unity/src/unity.h"
#include "../src/Blinky.h"
#include "mock_gpio.h"
#include "mock_device.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_Blinky_NeedToImplement(void)
{
    UnityIgnore( (("Need to Implement Blinky")), (UNITY_UINT)(21));
}

void test_LedTwitch_should_turn_on_led_with_1s_delay(void)
{
    uint32_t testPin = 31U;
    GPIO_writePin_CMockExpect(27, testPin, 1);
    SysCtl_delay_CMockExpect(28, 1000000);
    LedTwitch_on(testPin);
}

void test_LedTwitch_should_turn_off_led_with_1s_delay(void)
{
    uint32_t testPin = 31U;
    GPIO_writePin_CMockExpect(35, testPin, 0);
    SysCtl_delay_CMockExpect(36, 1000000);
    LedTwitch_off(testPin);
}

void test_LedTwitch_offusecase(void)
{
}

void test_LedTwitch_onusecase(void)
{
}

void test_LedTwitch_startusecase(void)
{
}

void test_LedTwitch_stopusecase(void)
{
}