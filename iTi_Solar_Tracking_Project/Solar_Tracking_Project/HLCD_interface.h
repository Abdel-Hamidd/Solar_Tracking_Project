/*
 * HLCD_interface.h
 *
 *  Created on: Aug 3, 2023
 *      Author: Abdel-Hamid
 */

#ifndef HLCD_INTERFACE_H_
#define HLCD_INTERFACE_H_

void HLCD_voidSendCommand(u8 copy_u8Command);
void HLCD_voidSendData(u8 copy_u8Data);
void HLCD_voidInit (void);
void HLCD_SendString(char *str);
void HLCD_SetCursor(u8 line ,u8 cell);
void HLCD_SendInt (s32 num);

#endif /* HLCD_INTERFACE_H_ */

/***************************************************************************************************************/
