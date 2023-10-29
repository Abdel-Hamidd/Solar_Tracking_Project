/*
 * M_ADC_REG.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: m
 */

#ifndef MCAL_M_ADC_REG_H_
#define MCAL_M_ADC_REG_H_

/************The ADC Data Register – ADCL and ADCH************/

#define ADC_DATA_REG     *((volatile u16*)(0x24))

#define ADCH  		     *((volatile u8 *)(0x25))

#define ADCL			 *((volatile u8*)(0x24))

/************ADC Control and Status Register A – ADCSRA************/

#define ADCSRA  		 *((volatile u8*)(0x26))
//• Bit 7 – ADEN: ADC Enable
#define ADEN  7
//• Bit 6 – ADSC: ADC Start Conversion
#define ADSC  6
//• Bit 5 – ADATE: ADC Auto Trigger Enable
#define ADATE 5
//• Bit 4 – ADIF: ADC Interrupt Flag
#define ADIF  4
//• Bit 3 – ADIE: ADC Interrupt Enable
#define ADIE  3

/*********ADC Multiplexer Selection Register – ADMUX*********/

#define ADMUX   		 *((volatile u8*)(0x27))
//• Bit 7:6 – REFS1:0: Reference Selection Bits
#define REFS1 7
#define REFS0 6
//• Bit 5 – ADLAR: ADC Left Adjust Result
#define ADLAR 5
//• Bits 4:0 – MUX4:0: Analog Channel and Gain Selection Bits
#define MUX4  4
#define MUX3  3
#define MUX2  2
#define MUX1  1
#define MUX0  0

/*********Special Function IO Register –SFIOR********/
#define SFIOR   		 *((volatile u8*)(0x50))



#endif /* MCAL_M_ADC_REG_H_ */
