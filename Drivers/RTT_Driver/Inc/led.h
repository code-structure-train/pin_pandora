#ifndef __RTT_LED_H__
#define __RTT_LED_H__

#include <entry.h>

#define LED_R_PIN    GET_PIN(E, 7)
#define LED_G_PIN    GET_PIN(E, 8)
#define LED_B_PIN    GET_PIN(E, 9)

void led_init(void);

#endif
