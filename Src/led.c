/*
 * led.c
 *
 *  Created on: May 27, 2022
 *      Author: A2
 */

#include<stdint.h>
#include "led.h"



void delay(uint32_t count)
{
  for(uint32_t i = 0 ; i < count ; i++);
}

void led_init_all(void)
{

	uint32_t *pClkctrlreg = (uint32_t*) 0x5800004C;
	uint32_t *pPortBmodereg = (uint32_t*) 0x48000400;

	// 1. Enable the clock for GPIOB peripheral in the AHB2ENR
	*pClkctrlreg |= (1 << 1);

	// 2. Configure the mode of the IO pin as output
	//a. Clear 11th, 10th, 1st and 0th bits
	*pPortBmodereg &= ~(3 << 10);
	*pPortBmodereg &= ~(3 << 0);
	*pPortBmodereg &= ~(3 << 2);

	//b. Set 10th bit to 1
	*pPortBmodereg |= (1 << 10); //BLUE
	//b. Set 0th bit to 1
	*pPortBmodereg |= (1 << 0); // GREEN
	//b. Set 1st bit to 1
	*pPortBmodereg |= (1 << 2); // RED



#if 0
	//configure the outputtype
	*pGpioOpTypeReg |= ( 1 << (2 * LED_GREEN));
	*pGpioOpTypeReg |= ( 1 << (2 * LED_ORANGE));
	*pGpioOpTypeReg |= ( 1 << (2 * LED_RED));
	*pGpioOpTypeReg |= ( 1 << (2 * LED_BLUE));
#endif

    led_off(LED_GREEN);
    led_off(LED_RED);
    led_off(LED_BLUE);



}

void led_on(LED_COLORS colors)
{

	uint32_t *pPortBoutreg = (uint32_t*) 0x48000414;
    *pPortBoutreg |= ( 1 << colors);

}

void led_off(LED_COLORS colors)
{
	uint32_t *pPortBoutreg = (uint32_t*) 0x48000414;
	*pPortBoutreg &= ~( 1 << colors);

}
