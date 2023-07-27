/*
 * led.h
 *
 *  Created on: May 27, 2022
 *      Author: A2
 */

#ifndef LED_H_
#define LED_H_
/*
#define LED_GREEN  5
#define LED_RED    1
#define LED_BLUE   0 */

typedef enum{
	LED_GREEN = 5,
	LED_RED = 1,
	LED_BLUE = 0
} LED_COLORS;

#define DELAY_COUNT_1MS 		 1250U
#define DELAY_COUNT_1S  		(1000U * DELAY_COUNT_1MS)
#define DELAY_COUNT_500MS  		(500U  * DELAY_COUNT_1MS)
#define DELAY_COUNT_250MS 		(250U  * DELAY_COUNT_1MS)
#define DELAY_COUNT_125MS 		(125U  * DELAY_COUNT_1MS)

void led_init_all(void);
void led_on(LED_COLORS colors);
void led_off(LED_COLORS colors);
void delay(uint32_t count);

#endif /* LED_H_ */
