/*
 * M_ADC_INT.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: m
 */

#ifndef MCAL_M_ADC_INT_H_
#define MCAL_M_ADC_INT_H_

#if ADC_STATE==ADC_STATE_ENABLE
/***********Macro deceleration section*************/

/*************ADC CHANNELS***************/
#define CHANNEL_1      0
#define CHANNEL_2      1
#define CHANNEL_3      2
#define CHANNEL_4      3
#define CHANNEL_5      4
#define CHANNEL_6      5
#define CHANNEL_7      6
#define CHANNEL_8      7


/****************Function like Macro Section***************/
#define ADC_ENABLE()  			   SET_BIT(ADCSRA,ADEN)

#define ADC_DISABLE()  			   CLEAR_BIT(ADCSRA,ADEN)

#define ADC_START_CONVERSION()     SET_BIT(ADCSRA,ADSC)

#define ADC_ENABLE_AUTO_TRIGGER()  SET_BIT(ADCSRA,ADATE)

#define ADC_ENABLE_AREEF_VOLTAGE_REF()   do{\
											CLEAR_BIT(ADMUX,REFS0);\
											CLEAR_BIT(ADMUX,REFS1);}\
										 while(0)

#define ADC_ENABLE_AVCC_VOLTAGE_REF()   do{\
											CLEAR_BIT(ADMUX,REFS1);\
											SET_BIT(ADMUX,REFS0);}\
										 while(0)

#define ADC_ENABLE_INTERNAL_2_56_REF()   do{\
											SET_BIT(ADMUX,REFS0);\
											SET_BIT(ADMUX,REFS1);}\
										 while(0)

/*************data adjustment****************/
#define ADC_LEFT_ADJUSTMENT()             SET_BIT(ADMUX,ADLAR)

#define ADC_RIGHT_ADJUSTMENT()            CLEAR_BIT(ADMUX,ADLAR)


/*
 *
 * cleared when i read the register cleared when interrupt executed cleared when i set to one

 */
//ADIE interrupt enable

#define ADC_ENABLE_INTERRUPT()		   SET_BIT(ADCSRA,ADIE)

#define ADC_FLAG_CLEAR() 			   SET_BIT(ADCSRA,ADIF)

#define ADC_DISABLE_INTERRUPT()        CLEAR_BIT(ADCSRA,ADIE)
// select ADC channel
#define ADC_SELECT_CHANNEL(_X)        (ADMUX=(ADMUX&0xE0)|(_X))

// select prescaler values
#define ADC_SELECT_CLOCK(_VAL)         (ADCSRA|=(_VAL))


void MADC_voidInit(void);
 u16 MADC_u16_GetVal_BLOCKING(u8 ADC_channel);
 u16 MADC_u16_GetVal_INTERRUPT(u8 ADC_channel);
 double Mapping_Values(u16 X_max , u16 X_min , u16 Y_max ,u16 Y_min , u16 y );
#endif
#endif /* MCAL_M_ADC_INT_H_ */
