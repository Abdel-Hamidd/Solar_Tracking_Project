/*
 * MCAL_TIMER0.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: m
 */
/********************Include Section********************/
#include"../Std_Library.h"
#include"../std_types.h"
#include"../macros.h"
#include"../GLOBAL_INTERRUPT/GLOBAL_INT_REG.h"
#include"../DIO/MCAL_DIO_REGISTERS.h"
#include"MCAL_TIMER1_REG.h"
#include"MCAL_TIMER1_INT.h"


void MTIMER1_VoidInit(MAIN_MODE_T Timer1_Mode , SUB_MODE_T Timer1_Sub_Mode , PRESCALING_VAL_T prescaler)
{
SET_TIMER1_MAIN_MODE(Timer1_Mode);
SET_TIMER1_SELECT_SUB_MODE(Timer1_Sub_Mode);
SELECT_PRESCALER(prescaler);
}


void MTIMER1_VoidDisable(void)
{
	/****************disable clock*************/

}


void SET_TIMER1_MAIN_MODE(MAIN_MODE_T MAIN)
{
	switch(MAIN)
	{
	case CTC_ICR1_TOP :
						Timer1_Enable_CTC_MODE_ICR1_TOP();
						break;
	case CTC_OCR1_TOP:
						Timer1_Enable_CTC_MODE_OCR1A_TOP();
						break;

	case FPWM_OCR1A_TOP:
						Timer1_Enable_FASTPWM_MODE_OCR1A_TOP();
					    break;

	case FPWM_ICR1_TOP:
					    Timer1_Enable_FASTPWM_MODE_ICR1_TOP();
						break;

	case NORMAL_MODE :
						Timer1_Enable_Normal_Mode();
						break;
	}
}



void SET_TIMER1_SELECT_SUB_MODE(SUB_MODE_T mode)
{
	switch(mode)
	{
	case NORMAL_OP_CH_A:TIMER_1_Normal_Port_Operation_Channel_A();
						break;

	case NORMAL_OP_CH_B:
						TIMER_1_Normal_Port_Operation_Channel_B();
						break;

	case CTC_TOGGLE_CH_A:
						TIMER_1_TOGGLE_ON_COMPAREMATCH_Channel_B();
						break;

	case CTC_TOGGLE_CH_B:
						 TIMER_1_TOGGLE_ON_COMPAREMATCH_Channel_A();
				         break;

	case CTC_SET_CH_A : TIMER_1_SET_ON_COMPAREMATCH_Channel_A();
				   	      break;
	case CTC_SET_CH_B :
				   	    TIMER_1_SET_ON_COMPAREMATCH_Channel_B();
				   	      break;


	case CTC_CLEAR_CH_A: TIMER_1_CLEAR_ON_COMPAREMATCH_Channel_A();
						   break;

	case CTC_CLEAR_CH_B:
						TIMER_1_CLEAR_ON_COMPAREMATCH_Channel_B();
						   break;


	case FPWM_TOGGLE_CH_A :TIMER_1_TOGGLE_ON_COMPAREMATCH_CLEAR_TOP_FPWM_CH_A();
						  break;


	case FPWM_TOGGLE_CH_B :TIMER_1_TOGGLE_ON_COMPAREMATCH_CLEAR_TOP_FPWM_CH_B();
						   break;

	case FPWM_CLEAR_CH_A :
					 	 TIMER_1_CLEAR_ON_COMPAREMATCH_SET_TOP_FPWM_CH_A();
					 	   break;

	case FPWM_CLEAR_CH_B : TIMER_1_CLEAR_ON_COMPAREMATCH_SET_TOP_FPWM_CH_B();
					 	   break;

	case FPWM_SET_CH_A :
				           TIMER_1_SET_ON_COMPAREMATCH_CLEAR_TOP_FPWM_CH_A();
				           break;

	case FPWM_SET_CH_B :   TIMER_1_SET_ON_COMPAREMATCH_CLEAR_TOP_FPWM_CH_B();
				           break;
	default :break;

	}
}
void SELECT_PRESCALER(PRESCALING_VAL_T PRESCALER)
{
  switch(PRESCALER)
  {
  case TIMER1_DISABLE_CLOCK_SOURCE:CLEAR_BIT(TCCR1B,TCCR1B_CS10);
  	  	  	  	  	  	  	  	   CLEAR_BIT(TCCR1B,TCCR1B_CS11);
  	  	  	  	  	  	  	  	   CLEAR_BIT(TCCR1B,TCCR1B_CS12);
	  	  	                       break;
  case TIMER1_NO_PRESCALE_CLOCK_SOURCE:SET_BIT(TCCR1B,TCCR1B_CS10);
  	  	  	  	  	  	  	  	  	  CLEAR_BIT(TCCR1B,TCCR1B_CS11);
  	  	  	  	  	  	  	  	  	  CLEAR_BIT(TCCR1B,TCCR1B_CS12);
  	  	  	  	  	  	  	  	  	  break;


  case TIMER1_PRESCALE_8_CLOCK_SOURCE :  CLEAR_BIT(TCCR1B,TCCR1B_CS10);
  	  	  	  	  	  	  	  	  	  	  SET_BIT(TCCR1B,TCCR1B_CS11);
  	  	  	  	  	  	  	  	  	  	  CLEAR_BIT(TCCR1B,TCCR1B_CS12);
  	  	  	  	  	  	  	  	  	  	  break;

  case TIMER1_PRESCALE_64_CLOCK_SOURCE:SET_BIT(TCCR1B,TCCR1B_CS10);
	  	  	  	  	  	  	  	  	   SET_BIT(TCCR1B,TCCR1B_CS11);
	  	  	  	  	  	  	  	  	   CLEAR_BIT(TCCR1B,TCCR1B_CS12);
	  	  	  	  	  	  	  	  	   	break;
  case TIMER1_PRESCALE_256_CLOCK_SOURCE:CLEAR_BIT(TCCR1B,TCCR1B_CS10);
  	  	  	  	  	  	  	  	  	  	CLEAR_BIT(TCCR1B,TCCR1B_CS11);
  	  	  	  	  	  	  	  	  	    SET_BIT(TCCR1B,TCCR1B_CS12);
  	  	  	  	  	  	  	  	  	    break;

  case TIMER1_PRESCALE_1024_CLOCK_SOURCE:SET_BIT(TCCR1B,TCCR1B_CS10);
	  	  	  							CLEAR_BIT(TCCR1B,TCCR1B_CS11);
	  	  	  							SET_BIT(TCCR1B,TCCR1B_CS12);
	  	  	  							break;

  case TIMER1_EXTERNAL_CLOCK_SOURCE_FALLING_EDGE_T1:
	  	  	  	  	  	  	  	  	  	    CLEAR_BIT(TCCR1B,TCCR1B_CS10);
	  	  	  	  							SET_BIT(TCCR1B,TCCR1B_CS11);
	  	  	  	  							SET_BIT(TCCR1B,TCCR1B_CS12);
	  	  	  	  							break;

  case TIMER1_EXTERNAL_CLOCK_SOURCE_RISING_EDGE_T1:
	  	  	  	  	  	  	  	  	  	  	  	SET_BIT(TCCR1B,TCCR1B_CS10);
	  	  	  	  	  							SET_BIT(TCCR1B,TCCR1B_CS11);
	  	  	  	  	  							SET_BIT(TCCR1B,TCCR1B_CS12);
	  	  	  	  	  							break;
default : break;




  }

}

void MTIMER1_VoidSetTopValue(MAIN_MODE_T MAIN,u16 Top_Val)
{
	 switch(MAIN)
	 {
		 case FPWM_ICR1_TOP : ICR1=Top_Val; break;
		 case CTC_ICR1_TOP :  ICR1=Top_Val; break;
		 case FPWM_OCR1A_TOP: OCR1A =Top_Val; break;
		 case CTC_OCR1_TOP : OCR1A =Top_Val; break;
		 case NORMAL_MODE : break;
		 default : break;
	 }
}
void SET_DUTYCYCLEVAL(u16 duty_val,MAIN_MODE_T MAIN_ )
{
	 switch(MAIN_)
	 {
	 case FPWM_ICR1_TOP : OCR1A=duty_val; break;
	 case FPWM_OCR1A_TOP : ICR1=duty_val; break;

	 }

}
void MTIMER1_ICU_EDGE_SELECT(u8 EDGE)
{

	switch(EDGE)
	{
	case ICU_RAISING_EDGE : TIMER1_ICU_SET_RAISING_EDGE(); break;
	case ICU_FALLING_EDGE :TIMER1_ICU_SET_FALLING_EDGE(); break;
	default : break;

	}

}
void MTIMER1_ENABLE_ICU_INTERRUPT(void)
{

	ENABLE_INPUT_CAPTURE_INTERRUPT();
}
u16 MTIMER1_READ_ICU_VALUE(void)
{
return ICR1;
}
