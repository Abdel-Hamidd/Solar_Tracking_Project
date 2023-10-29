/*
 * MDIO_program.c
 *
 *  Created on: Aug 8, 2023
 *      Author: Abdel-Hamid
 */

#include "std_types.h"
#include "common_macros.h"
#include "MDIO_interface.h"
#include "MDIO_registers.h"
#include "MDIO_cnfig.h"
#include "MDIO_private.h"


void PORT_voidInit (void)
{
	DDRA=PORTA_DIR;
	DDRB=PORTB_DIR;
	DDRC=PORTC_DIR;
	DDRD=PORTD_DIR;

	PORTA =PORTA_VALUE;
	PORTB =PORTB_VALUE;
	PORTC =PORTC_VALUE;


	PORTD = PORTD_VALUE;
}

void MDIO_voidSetPinDirection (u8 copy_u8Port , u8 copy_u8Pin , u8 copy_u8Mode )
{


	if(copy_u8Mode==DIO_INTPUT)
	{
		switch(copy_u8Port)
		{
		case DIO_PORTA : CLR_BIT(DDRA,copy_u8Pin);break;
		case DIO_PORTB : CLR_BIT(DDRB,copy_u8Pin);break;
		case DIO_PORTC : CLR_BIT(DDRC,copy_u8Pin);break;
		case DIO_PORTD : CLR_BIT(DDRD,copy_u8Pin);break;
		default : break;

		}
	}
	else if (copy_u8Mode==DIO_OUTPUT)
	{
		switch(copy_u8Port)
		{
		case DIO_PORTA : SET_BIT(DDRA,copy_u8Pin);break;
		case DIO_PORTB : SET_BIT(DDRB,copy_u8Pin);break;
		case DIO_PORTC : SET_BIT(DDRC,copy_u8Pin);break;
		case DIO_PORTD : SET_BIT(DDRD,copy_u8Pin);break;
		default : break;

		}

	}

}

Error_State_t MDIO_Error_State_tSetPinValue (u8 copy_u8Port , u8 copy_u8Pin , u8 copy_u8Mode )
{
	Error_State_t Error_State =Return_OK;
	if(copy_u8Pin>7)
	{
		Error_State =Return_NOK;
	}
	else
	{
		if(copy_u8Mode==DIO_LOW)
		{
			switch(copy_u8Port)
			{
			case DIO_PORTA : CLR_BIT(PORTA,copy_u8Pin);break;
			case DIO_PORTB : CLR_BIT(PORTB,copy_u8Pin);break;
			case DIO_PORTC : CLR_BIT(PORTC,copy_u8Pin);break;
			case DIO_PORTD : CLR_BIT(PORTD,copy_u8Pin);break;
			default : break;

			}
		}
		else if (copy_u8Mode==DIO_HIGH)
		{
			switch(copy_u8Port)
			{
			case DIO_PORTA : SET_BIT(PORTA,copy_u8Pin);break;
			case DIO_PORTB : SET_BIT(PORTB,copy_u8Pin);break;
			case DIO_PORTC : SET_BIT(PORTC,copy_u8Pin);break;
			case DIO_PORTD : SET_BIT(PORTD,copy_u8Pin);break;
			default : break;

			}

		}
	}
	return Error_State;
}

Error_State_t MDIO_Error_State_tGetPinValue (u8 copy_u8Port , u8 copy_u8Pin , u8 *p_u8Value )
{
	Error_State_t Error_State =Return_OK;
	if(copy_u8Pin>7)
	{
		Error_State =Return_NOK;
	}
	else
	{
		switch(copy_u8Port)
		{
		case DIO_PORTA : *p_u8Value =GET_BIT(PINA,copy_u8Pin);break;
		case DIO_PORTB : *p_u8Value =GET_BIT(PINB,copy_u8Pin);break;
		case DIO_PORTC : *p_u8Value =GET_BIT(PINC,copy_u8Pin);break;
		case DIO_PORTD : *p_u8Value =GET_BIT(PIND,copy_u8Pin);break;
		default : break;
		}
	}
	return Error_State;

}

Error_State_t MDIO_EnumSetPortValue(u8 Copy_u8Port, u8 Copy_u8Value)
{
	Error_State_t Error_State = Return_OK;
	if(Copy_u8Port>PIN7)
	{
		Error_State = Return_NOK;
	}
	else
	{
		switch(Copy_u8Port)
		{
		case DIO_PORTA: PORTA=Copy_u8Value; break;
		case DIO_PORTB: PORTB=Copy_u8Value; break;
		case DIO_PORTC: PORTC=Copy_u8Value; break;
		case DIO_PORTD: PORTD=Copy_u8Value; break;
		default: Error_State = Return_NOK; break;
		}
	}

	return Error_State;
}


Error_State_t MDIO_EnumGetPortValue(u8 Copy_u8Port, u8* P_u8Value)
{
	Error_State_t Error_State = Return_OK;
	if(Copy_u8Port>PIN7)
	{
		Error_State = Return_NOK;
	}
	else
	{
		switch(Copy_u8Port)
		{
		case DIO_PORTA: *P_u8Value=PINA; break;
		case DIO_PORTB: *P_u8Value=PINB; break;
		case DIO_PORTC: *P_u8Value=PINC; break;
		case DIO_PORTD: *P_u8Value=PIND; break;
		default: Error_State = Return_NOK; break;
		}
	}

	return Error_State;
}

Error_State_t MDIO_Error_state_tTogglePinValue(u8 copy_u8port,u8 copy_u8pin)
{
	Error_State_t Error_state=Return_OK;
	if(copy_u8pin>PIN7)
	{
		Error_state=Return_NOK;
	}
	switch (copy_u8port)
	{
	case DIO_PORTA : TOG_BIT(PORTA, copy_u8pin); break;
	case DIO_PORTB : TOG_BIT(PORTB, copy_u8pin); break;
	case DIO_PORTC : TOG_BIT(PORTC, copy_u8pin); break;
	case DIO_PORTD : TOG_BIT(PORTD, copy_u8pin); break;
	default:  Error_state=Return_NOK; break;
	}
	return Error_state;
}

/***************************************************************************************************************/

