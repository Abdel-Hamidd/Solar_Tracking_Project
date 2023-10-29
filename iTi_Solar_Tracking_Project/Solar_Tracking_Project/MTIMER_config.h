/*
 * MTIMER_config.h
 *
 *  Created on: Aug 10, 2023
 *      Author: Abdel-Hamid
 */

#ifndef MTIMER_CONFIG_H_
#define MTIMER_CONFIG_H_


#define PRELOAD_VALUE  192
/* please select timer0 mode
 * TIMER0_NORMAL
 * TIMER0_CTC */

#define TIMER0_MODE     TIMER0_FAST_PWM
#define COMPARE_MATCH_VALUE     192

/* Please select Timer0 Prescaler: TIMER0_NO_PRESCALER,
*                                  TIMER0_8_PRESCALER,
*                                  TIMER0_64_PRESCALER,
*                                  TIMER0_256_PRESCALER,
*                                  TIMER0_1024_PRESCALER, */

#define TIMER0_PRESCALER         TIMER0_8_PRESCALER

#endif /* MTIMER_CONFIG_H_ */

/***************************************************************************************************************/

