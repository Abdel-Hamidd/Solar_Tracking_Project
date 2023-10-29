/*
 * MGIE_program.c
 *
 *  Created on: Aug 8, 2023
 *      Author: Abdel-Hamid
 */

#include "std_types.h"
#include "common_macros.h"
#include "MGIE_interface.h"
#include "MGIE_registers.h"


void MGIE_voidEnable(void)
{
	SET_BIT(SREG,SREG_I);
}
void MGIE_voidDisable(void)
{
	CLR_BIT(SREG,SREG_I);
}

/***************************************************************************************************************/

