/*
 * HLCD_program.c
 *
 *  Created on: Aug 3, 2023
 *      Author: Abdel-Hamid
 */

#include "std_types.h"
#include "common_macros.h"
#include "MDIO_interface.h"
#include "HLCD_config.h"
#include "HLCD_interface.h"
#include "HLCD_private.h"
#include <util/delay.h>


void HLCD_voidSendCommand(u8 copy_u8Command)
{
	/* CLR RS to send command */
	MDIO_Error_State_tSetPinValue(LCD_PORT_CTRL,LCD_RS,DIO_LOW);
	/* CLR R/W to write */
	MDIO_Error_State_tSetPinValue(LCD_PORT_CTRL,LCD_RW,DIO_LOW);
	/* Send command */
	MDIO_EnumSetPortValue(LCD_PORT_DATA,copy_u8Command);
	/* Set EN to make LCD MICRO . read command */
	MDIO_Error_State_tSetPinValue(LCD_PORT_CTRL,LCD_EN,DIO_HIGH);
	_delay_ms(2);
	MDIO_Error_State_tSetPinValue(LCD_PORT_CTRL,LCD_EN,DIO_LOW);
}

void HLCD_voidSendData(u8 copy_u8Data)
{
	/* SET RS to send command */
	MDIO_Error_State_tSetPinValue(LCD_PORT_CTRL,LCD_RS,DIO_HIGH);
	/* CLR R/W to write */
	MDIO_Error_State_tSetPinValue(LCD_PORT_CTRL,LCD_RW,DIO_LOW);
	/* Send command */
	MDIO_EnumSetPortValue(LCD_PORT_DATA,copy_u8Data);
	/* Set EN to make LCD MICRO . read command */
	MDIO_Error_State_tSetPinValue(LCD_PORT_CTRL,LCD_EN,DIO_HIGH);
	_delay_ms(2);
	MDIO_Error_State_tSetPinValue(LCD_PORT_CTRL,LCD_EN,DIO_LOW);
}

void HLCD_voidInit (void)
{
	_delay_ms(40);
	HLCD_voidSendCommand(0b00111100); /// function set
	HLCD_voidSendCommand(0b00001100); // display on/off control
	HLCD_voidSendCommand(1); // clear screen

}

void HLCD_SendString(char *str)
{
	u8 i;
	for(i=0;str[i];i++)
	{
		HLCD_voidSendData(str[i]);
	}
}

void HLCD_SetCursor(u8 line ,u8 cell)        // line 0:1  cell 0:15
{
	if(line==0)
	{
		HLCD_voidSendCommand(0x80|cell);   // set dd ram address to line 0 and set the cell that the user has entered
	}
	else if(line==1)
	{
		HLCD_voidSendCommand(0x80|0x40|cell);  // set dd ram address to line 1 and set the cell that the user has entered
	}
}
void HLCD_SendInt (s32 num)
{
	u8 i=0,str[10];
	s8 j;

	if(num==0)
	{
		HLCD_voidSendData('0');
		return;
	}
	if(num<0)
	{
		HLCD_voidSendData('-');
		num=num*(-1);
	}

	while(num)
	{
		str[i]=(num%10)+'0';
		num=num/10;
		i++;
	}

	for(j=i-1;j>=0;j--)
	{

		HLCD_voidSendData(str[j]);
	}
}

/***************************************************************************************************************/
