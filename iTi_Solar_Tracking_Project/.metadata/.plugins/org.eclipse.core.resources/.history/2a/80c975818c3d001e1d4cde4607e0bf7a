/*
 * MCAL_TIMER1_INT.h

 *
 *  Created on: ??þ/??þ/????
 *      Author: m
 */

#ifndef MCAL_TIMER_1_MCAL_TIMER0_INT_H_
#define MCAL_TIMER_1_MCAL_TIMER0_INT_H_
/************************Macro decleration************************/

#define ICU_RAISING_EDGE 1
#define ICU_FALLING_EDGE 2



/************************Macro Function decleration************************/

/*********************. Waveform Generation Mode Select*********************/

#define Timer1_Enable_Normal_Mode()      			 do{\
														CLEAR_BIT(TCCR1A,TCCR1A_WGM10);\
														CLEAR_BIT(TCCR1A,TCCR1A_WGM11);\
														CLEAR_BIT(TCCR1B,TCCR1B_WGM12);\
														CLEAR_BIT(TCCR1B,TCCR1B_WGM13);}\
											 	 	 while(0)


#define Timer1_Enable_FASTPWM_MODE_ICR1_TOP()         do{\
														    CLEAR_BIT(TCCR1A,TCCR1A_WGM10);\
															SET_BIT(TCCR1A,TCCR1A_WGM11);\
										                    SET_BIT(TCCR1B,TCCR1B_WGM12);\
										                    SET_BIT(TCCR1B,TCCR1B_WGM13);}\
										 			   while(0)

#define Timer1_Enable_FASTPWM_MODE_OCR1A_TOP()       do{\
														    SET_BIT(TCCR1A,TCCR1A_WGM10);\
															SET_BIT(TCCR1A,TCCR1A_WGM11);\
										                    SET_BIT(TCCR1B,TCCR1B_WGM12);\
										                    SET_BIT(TCCR1B,TCCR1B_WGM13);}\
										 			  while(0)

#define Timer1_Enable_CTC_MODE_OCR1A_TOP()       do{\
													CLEAR_BIT(TCCR1A,TCCR1A_WGM10);\
													CLEAR_BIT(TCCR1A,TCCR1A_WGM11);\
													SET_BIT(TCCR1B,TCCR1B_WGM12);\
													CLEAR_BIT(TCCR1B,TCCR1B_WGM13);}\
										 			  while(0)


#define Timer1_Enable_CTC_MODE_ICR1_TOP()       do{\
													CLEAR_BIT(TCCR1A,TCCR1A_WGM10);\
													CLEAR_BIT(TCCR1A,TCCR1A_WGM11);\
													SET_BIT(TCCR1B,TCCR1B_WGM12);\
													SET_BIT(TCCR1B,TCCR1B_WGM13);}\
										 			 while(0)

///**********The three Clock Select bits select the clock source **********/
//
//
//#define TIMER0_SELECT_CLOCK_SOURCE(_CLOCK)        TCCR0=((TCCR0&0xF8)|(_CLOCK))
//
//
///*************************INTERRUPT SECTION *******************************/
///*************************INTERRUPT SECTION *******************************/
///*************************INTERRUPT SECTION *******************************/
//
//
///***************enable over flow interrupt in Normal Mode******************/
////vector number is 11
//#define TIMER0_ENABLE_NORMAL_MODE_OVER_FLOW_INTERRUPT()   SET_BIT(TIMSK,TIMSK_TOIE);
//
///***********************enable compare on match mode***********************/
////vector number is 10
//#define TIMER0_ENABLE_COMPARE_MODE_MATCH_INTERRUPT()      SET_BIT(TIMSK,TIMSK_OCIE);
//#define TIMER0_DISABLE_COMPARE_MODE_MATCH_INTERRUPT()     CLEAR_BIT(TIMSK,TIMSK_OCIE);
//
///***************clear over flow flag *****************/
//#define TIMER0_CLEAR_OVER_FLOW_FLAG()                     SET_BIT(TIFR,TIFR_TOV0);
//
///***************clear compare on match flag *****************/
//
//#define TIMER0_CLEAR_COMPARE_MATCH_FLAG()                 SET_BIT(TIFR,TIFR_OCF0);
//
///***************RESET TIMER0 -TIMER1 REGISTER *****************/
//
//#define TIMER0_TIMER1_PRESCALER_RESET()                   SET_BIT(SFIOR,SFIOR_PSR10);


//a0 0 b0 0 a1 1 b1 1
/*1->>**********************Compare Output Mode, non-PWM Mode CHANNEL A***************/
/*1->>**********************Compare Output Mode, non-PWM Mode CHANNEL A***************/
/*1->>**********************Compare Output Mode, non-PWM Mode CHANNEL A***************/

#define TIMER_1_Normal_Port_Operation_Channel_A() 	  do{\
														CLEAR_BIT(TCCR1A,TCCR1A_COM1A1);\
														CLEAR_BIT(TCCR1A,TCCR1A_COM1A0);}\
														while(0)
/*******************TOGGLE ON COMPARE MATCH****************************/

#define TIMER_1_TOGGLE_ON_COMPAREMATCH_Channel_A() 	  do{\
										   	   	   	   CLEAR_BIT(TCCR1A,TCCR1A_COM1A1);\
										   	   	   	   SET_BIT(TCCR1A,TCCR1A_COM1A0);}\
										   	   	   	   while(0)



/*******************CLEAR ON COMPARE MATCH****************************/


#define TIMER_1_CLEAR_ON_COMPAREMATCH_Channel_A() 	  do{\
										     	 	 	 SET_BIT(TCCR1A,TCCR1A_COM1A1);\
										     	 	 	 CLEAR_BIT(TCCR1A,TCCR1A_COM1A0);}\
											 	 	 while(0)
/*******************SET ON COMPARE MATCH****************************/

#define TIMER_1_SET_ON_COMPAREMATCH_Channel_A() 	  do{\
										     	 	 	 SET_BIT(TCCR1A,TCCR1A_COM1A1);\
										     	 	 	 SET_BIT(TCCR1A,TCCR1A_COM1A0);}\
													  while(0)



/*1->>**********************Compare Output Mode, non-PWM Mode CHANNEL B***************/
/*1->>**********************Compare Output Mode, non-PWM Mode CHANNEL B***************/
/*1->>**********************Compare Output Mode, non-PWM Mode CHANNEL B***************/

#define TIMER_1_Normal_Port_Operation_Channel_B() 	  do{\
														CLEAR_BIT(TCCR1A,TCCR1A_COM1B1);\
														CLEAR_BIT(TCCR1A,TCCR1A_COM1B0);}\
														while(0)
/*******************TOGGLE ON COMPARE MATCH****************************/

#define TIMER_1_TOGGLE_ON_COMPAREMATCH_Channel_B() 	  do{\
														CLEAR_BIT(TCCR1A,TCCR1A_COM1B1);\
														SET_BIT(TCCR1A,TCCR1A_COM1B0);}\
														while(0)
/*******************CLEAR ON COMPARE MATCH****************************/


#define TIMER_1_CLEAR_ON_COMPAREMATCH_Channel_B() 	  do{\
										     	 	 	 SET_BIT(TCCR1A,TCCR1A_COM1B1);\
										     	 	 	 CLEAR_BIT(TCCR1A,TCCR1A_COM1B0);}\
													 while(0)
/*******************SET ON COMPARE MATCH****************************/

#define TIMER_1_SET_ON_COMPAREMATCH_Channel_B() 	  do{\
										     	 	 	 SET_BIT(TCCR1A,TCCR1A_COM1B1);\
										     	 	 	 SET_BIT(TCCR1A,TCCR1A_COM1B0);}\
													 while(0)


/*2->>**********************Compare Output Mode, Fast PWM Mode CHANNEL A***************/
/*2->>**********************Compare Output Mode, Fast PWM Mode CHANNEL A***************/
/*2->>**********************Compare Output Mode, Fast PWM Mode CHANNEL A***************/
//non inverting
#define TIMER_1_CLEAR_ON_COMPAREMATCH_SET_TOP_FPWM_CH_A() 	  do{\
																SET_BIT(TCCR1A,TCCR1A_COM1A1);\
																CLEAR_BIT(TCCR1A,TCCR1A_COM1A0);}\
															  while(0)

//inverting
#define TIMER_1_SET_ON_COMPAREMATCH_CLEAR_TOP_FPWM_CH_A() 	  do{\
																SET_BIT(TCCR1A,TCCR1A_COM1A1);\
																SET_BIT(TCCR1A,TCCR1A_COM1A0);}\
															 while(0)

//WGM13:0 = 15: Toggle OC1A on Compare Match,
//OC1B disconnected (normal port operation).For all other WGM13:0 settings, normal port operation,
//OC1A/OC1B disconnected.
#define TIMER_1_TOGGLE_ON_COMPAREMATCH_CLEAR_TOP_FPWM_CH_A() 	  do{\
																SET_BIT(TCCR1A,TCCR1A_COM1A1);\
																SET_BIT(TCCR1A,TCCR1A_COM1A0);}\
															 while(0)
/*2->>**********************Compare Output Mode, Fast PWM Mode CHANNEL B***************/
/*2->>**********************Compare Output Mode, Fast PWM Mode CHANNEL B***************/
/*2->>**********************Compare Output Mode, Fast PWM Mode CHANNEL B***************/
//non inverting
#define TIMER_1_CLEAR_ON_COMPAREMATCH_SET_TOP_FPWM_CH_B() 	  do{\
																SET_BIT(TCCR1A,TCCR1A_COM1B1);\
																CLEAR_BIT(TCCR1A,TCCR1A_COM1B0);}\
															  while(0)

//inverting
#define TIMER_1_SET_ON_COMPAREMATCH_CLEAR_TOP_FPWM_CH_B() 	  do{\
																SET_BIT(TCCR1A,TCCR1A_COM1B1);\
																SET_BIT(TCCR1A,TCCR1A_COM1B0);}\
															 while(0)

//WGM13:0 = 15: Toggle OC1A on Compare Match,
//OC1B disconnected (normal port operation).For all other WGM13:0 settings, normal port operation,
//OC1A/OC1B disconnected.
#define TIMER_1_TOGGLE_ON_COMPAREMATCH_CLEAR_TOP_FPWM_CH_B() 	  do{\
																SET_BIT(TCCR1A,TCCR1A_COM1B1);\
																SET_BIT(TCCR1A,TCCR1A_COM1B0);}\
															 while(0)
/*****************INPUT CAPTURE UNIT CNFG************************/
#define TIMER1_ICU_SET_FALLING_EDGE()    CLEAR_BIT(TCCR1B,TCCR1B_ICES1)
#define TIMER1_ICU_SET_RAISING_EDGE()	 SET_BIT(TCCR1B,TCCR1B_ICES1)
/***********************INTERRUPT CNFG************************/
/*************enable icu interrupt**************************/
#define ENABLE_INPUT_CAPTURE_INTERRUPT()   SET_BIT(TIMSK,TIMSK_TICIE1)
/*************disable icu interrupt**************************/

#define DISABLE_INPUT_CAPTURE_INTERRUPT()   CLEAR_BIT(TIMSK,TIMSK_TICIE1)

/**************: Timer/Counter1, Output Compare A Match Interrupt Enable***********/
#define TIMER1_ENABLE_CTC_CH_A_INTERRUPT()  SET_BIT(TIMSK,TIMSK_OCIE1A)
/**************: Timer/Counter1, Output Compare A Match Interrupt Disable***********/
#define TIMER1_DISABLE_CTC_CH_A_INTERRUPT()  CLEAR_BIT(TIMSK,TIMSK_OCIE1A)
/**********: : Timer/Counter1, Output Compare B Match Interrupt Enable*************/
#define TIMER1_ENABLE_CTC_CH_B_INTERRUPT()  SET_BIT(TIMSK,TIMSK_OCIE1B)
/**********: : Timer/Counter1, Output Compare B Match Interrupt Disable*************/

#define TIMER1_DISABLE_CTC_CH_B_INTERRUPT()  CLEAR_BIT(TIMSK,TIMSK_OCIE1B)


/**************: : Timer/Counter1, Overflow Interrupt Enable***********************/

#define TIMER1_ENABLE_OVERFLOW_INTERRUPT()  SET_BIT(TIMSK,TIMSK_OCIE1B)
/**************: : Timer/Counter1, Overflow Interrupt Disable***********************/

#define TIMER1_DISABLE_OVERFLOW_INTERRUPT()  CLEAR_BIT(TIMSK,TIMSK_OCIE1B)

/*************clear icu FLAG**************************/

#define TIMER1_INPUT_CAPTURE_CLEAR_FLAG()   SET_BIT(TIFR,TIFR_ICF1)


/************************Data Type decleration************************/
typedef enum
{
NORMAL_MODE=0,
FPWM_ICR1_TOP,
FPWM_OCR1A_TOP,
CTC_ICR1_TOP,
CTC_OCR1_TOP,
}MAIN_MODE_T;

typedef enum
{
CTC_TOGGLE_CH_A,
CTC_TOGGLE_CH_B,
CTC_SET_CH_A,
CTC_SET_CH_B,
CTC_CLEAR_CH_A,
CTC_CLEAR_CH_B,
NORMAL_OP_CH_A,
NORMAL_OP_CH_B,
FPWM_TOGGLE_CH_A,
FPWM_CLEAR_CH_A,
FPWM_SET_CH_A,
FPWM_TOGGLE_CH_B,
FPWM_CLEAR_CH_B,
FPWM_SET_CH_B,

}SUB_MODE_T;
typedef enum
{
 TIMER1_DISABLE_CLOCK_SOURCE,
 TIMER1_NO_PRESCALE_CLOCK_SOURCE,
TIMER1_PRESCALE_8_CLOCK_SOURCE,
TIMER1_PRESCALE_64_CLOCK_SOURCE,
TIMER1_PRESCALE_256_CLOCK_SOURCE,
TIMER1_PRESCALE_1024_CLOCK_SOURCE,
TIMER1_EXTERNAL_CLOCK_SOURCE_FALLING_EDGE_T1,
TIMER1_EXTERNAL_CLOCK_SOURCE_RISING_EDGE_T1,

}PRESCALING_VAL_T;

/************************Function decleration************************/
void MTIMER1_VoidDisable(void);
void SET_TIMER1_SELECT_MAIN_MODE(u8 mode);
void MTIMER1_VoidInit(MAIN_MODE_T Timer1_Mode , SUB_MODE_T Timer1_Sub_Mode , PRESCALING_VAL_T prescaler);
void MTIMER1_VoidDisable(void);
void SET_TIMER1_MAIN_MODE(MAIN_MODE_T mode);
void MTIMER1_VoidSetTopValue(MAIN_MODE_T MAIN,u16 Top_Val);
void SELECT_PRESCALER(PRESCALING_VAL_T PRESCALER);
void SET_TIMER1_SELECT_SUB_MODE(SUB_MODE_T mode);
u16 MTIMER1_READ_ICU_VALUE(void);
void MTIMER1_ICU_EDGE_SELECT(u8 EDGE);
void MTIMER1_ENABLE_ICU_INTERRUPT(void);
void SET_DUTYCYCLEVAL(u16 duty_val,MAIN_MODE_T MAIN_);

#endif /* MCAL_TIMER_1_MCAL_TIMER1_INT_H_ */
