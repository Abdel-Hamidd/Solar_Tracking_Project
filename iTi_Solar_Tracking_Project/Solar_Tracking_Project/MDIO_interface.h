/*
 * MDIO_interface.h
 *
 *  Created on: Aug 8, 2023
 *      Author: Abdel-Hamid
 */

#ifndef  _M_DIO_INTERFACE_H
#define  _M_DIO_INTERFACE_H

typedef enum{
	Return_OK,
	Return_NOK,
	Return_NULLPTR

}Error_State_t;


void PORT_voidInit (void);
void MDIO_voidSetPinDirection (u8 copy_u8Port , u8 copy_u8Pin , u8 copy_u8Mode );
Error_State_t MDIO_Error_State_tSetPinValue (u8 copy_u8Port , u8 copy_u8Pin , u8 copy_u8Mode );
Error_State_t MDIO_Error_State_tGetPinValue (u8 copy_u8Port , u8 copy_u8Pin , u8 *p_u8Value );
Error_State_t MDIO_EnumSetPortValue(u8 Copy_u8Port, u8 Copy_u8Value);
Error_State_t MDIO_EnumGetPortValue(u8 Copy_u8Port, u8* P_u8Value);
Error_State_t MDIO_Error_state_tTogglePinValue(u8 copy_u8port,u8 copy_u8pin);
#define DIO_OUTPUT         1
#define DIO_INTPUT         0

#define  DIO_PORTA         1
#define  DIO_PORTB         2
#define  DIO_PORTC         3
#define  DIO_PORTD         4



#define DIO_HIGH           1
#define DIO_LOW            0

#define PIN0               0
#define PIN1               1
#define PIN2               2
#define PIN3               3
#define PIN4               4
#define PIN5               5
#define PIN6               6
#define PIN7               7


#endif

/***************************************************************************************************************/

