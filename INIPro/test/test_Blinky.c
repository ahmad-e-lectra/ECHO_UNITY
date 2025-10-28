
#ifdef TEST

#include "unity.h"
#include "Blinky.h"
//#include "mock_Blinky.h"
#include "mock_fake_driverLib_Led.h"


void setUp(void)
{
}

void tearDown(void)
{
}

void test_Blinky_NeedToImplement(void)
{
    TEST_IGNORE_MESSAGE("Need to Implement Blinky");
}

void test_LedTwitch_should_turn_on_led_with_1s_delay(void)
{
    uint32_t testPin = DEVICE_GPIO_PIN_LED1;
    GPIO_writePin_Expect(testPin, 1);
    SysCtl_delay_Expect(1000000);
    LedTwitch_on(testPin);
}

void test_LedTwitch_should_turn_off_led_with_1s_delay(void)
{
    uint32_t testPin = DEVICE_GPIO_PIN_LED1;
    GPIO_writePin_Expect(testPin, 0);
    SysCtl_delay_Expect(1000000);
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

#endif // TEST
