/***************************************************************************************************************
*                                          Module: Common - Macros                                             *
*                                          File Name: common_macros.h                                          *
*                                          Description: Commonly used Macros                                   *
*                                          Author: Abdel-Hamid Tarek                                           *
****************************************************************************************************************/

#ifndef COMMON_MACROS_H_
#define COMMON_MACROS_H_

/* Set a certain bit in any register */
#define SET_BIT(REG,BIT) (REG|=(1<<BIT))

/* Clear a certain bit in any register */
#define CLR_BIT(REG,BIT) (REG&=(~(1<<BIT)))

/* Toggle a certain bit in any register */
#define TOG_BIT(REG,BIT) (REG^=(1<<BIT))

/* Rotate right the register value with specific number of rotates */
#define ROR(REG,num) ( REG= (REG>>num) | (REG<<(8-num)) )

/* Rotate left the register value with specific number of rotates */
#define ROL(REG,num) ( REG= (REG<<num) | (REG>>(8-num)) )

/* Check if a specific bit is set in any register and return true if yes */
#define BIT_IS_SET(REG,BIT) ( REG & (1<<BIT) )

/* Check if a specific bit is cleared in any register and return true if yes */
#define BIT_IS_CLEAR(REG,BIT) ( !(REG & (1<<BIT)) )

/* Macro to extract the value of a specific bit (BIT) from a register (REG) */

#define GET_BIT(REG,BIT) ( ( REG & (1<<BIT) ) >> BIT )

#endif  /* COMMON_MACROS_H_ */

/***************************************************************************************************************/
