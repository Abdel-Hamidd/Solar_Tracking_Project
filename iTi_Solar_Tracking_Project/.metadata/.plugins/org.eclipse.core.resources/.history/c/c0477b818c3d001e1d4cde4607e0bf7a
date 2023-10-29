/*
 * MCAL_TIMER1_REG.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: m
 */

#ifndef MCAL_TIMER_1_MCAL_TIMER0_REG_H_
#define MCAL_TIMER_1_MCAL_TIMER0_REG_H_
// control register
#define TCCR1A     *((volatile u8*)(0x4F))
//: Waveform Generation Mode
//Combined with the WGM13:2 bits found in the TCCR1B Register
#define TCCR1A_WGM10   			  0

#define TCCR1A_WGM11    		  1
// Force Output Compare for Channel B

#define TCCR1A_FOC1B   			  2

// Force Output Compare for Channel A
#define TCCR1A_FOC1A   			  3
//– COM1B1:0: Compare Output Mode for Channel B
#define TCCR1A_COM1B0   		  4
#define TCCR1A_COM1B1   		  5

//Compare Output Mode for Channel A
#define TCCR1A_COM1A0	  		  6

#define TCCR1A_COM1A1	   		  7

/*******************************************/
#define TCCR1B     *((volatile u8*)(0x4E))

//CS12:0: Clock Select

#define TCCR1B_CS10    		 	  0

#define TCCR1B_CS11    			  1

#define TCCR1B_CS12    		 	  2

//: Waveform Generation Mode With TCCR1A bits
#define TCCR1B_WGM12    		  3
#define TCCR1B_WGM13   		 	  4
// Input Capture Edge Select
#define TCCR1B_ICES1		      6

//: Input Capture Noise Canceler
#define TCCR1B_ICNC1	 	      7

/*******************************************/
// counter register
//Timer/Counter1 – TCNT1H and TCNT1L
#define TCNT1	  *((volatile u16*)(0x4C))

// CTC compared counter register
//Output Compare Register ->(1) A – OCR1AH and OCR1AL // CHANNEL A
#define OCR1A	  *((volatile u16*)(0x4A))

// CTC compared counter register
//Output Compare Register ->(2) B – OCR1BH and OCR1BL // CHANNEL B
#define OCR1B	  *((volatile u16*)(0x48))

// ICR INPUT CAPTURE REGISTER
//Input Capture Register 1 – ICR1H and ICR1L
#define ICR1      *((volatile u16*)(0x46))





// interrupt enable register

#define TIMSK	  *((volatile u8*)(0x59))
/***********– TICIE1: Timer/Counter1, Input Capture Interrupt Enable***************/
#define TIMSK_TICIE1              5


/**************: Timer/Counter1, Output Compare A Match Interrupt Enable***********/
#define TIMSK_OCIE1A   			  4



/**********: : Timer/Counter1, Output Compare B Match Interrupt Enable*************/

#define TIMSK_OCIE1B   			  3


/**************: : Timer/Counter1, Overflow Interrupt Enable***********************/

#define TIMSK_TOIE1     		  2




//interrupt flag register

#define TIFR	  *((volatile u8*)(0x58))
/***************Timer/Counter1, Input Capture Flag******************/
#define TIFR_ICF1     			  5

/***************: Timer/Counter1, Output Compare A Match Flag******************/
#define TIFR_OCF1A     			  4
/*****************Timer/Counter1, Output Compare B Match Flag****************/
#define TIFR_OCF1B     		   	  3
/*****************: Timer/Counter1, Overflow Flag****************/
#define TIFR_TOV1     			  2





#endif /* MCAL_TIMER_1_MCAL_TIMER1_REG_H_ */
