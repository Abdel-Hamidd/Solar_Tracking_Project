/***************************************************************************************************************
*                                          Module: Solar Tracking Project                                      *
*                                          File Name: app.c                                                    *
*                                          Author: Abdel-Hamid Tarek                                           *
****************************************************************************************************************/
#include "std_types.h"
#include "common_macros.h"

#include "MDIO_interface.h"
#include "MTIMER_interface.h"
#include "MGIE_interface.h"
#include "MADC_interface.h"
#include "HLCD_interface.h"


u16 MAPPING(u16 x_max, u16 x_min, u16 y_max, u16 y_min, u16 y);

int main(){
	u16 Reading_Value;
	u16 Mapped_Value;
	u16 Angle_degree = 0;

	PORT_voidInit();
	MADC_voidInit();
	HLCD_voidInit();

	MTIMER1_voidInit(FAST_PWM_NON_INVERTING, TOP_FPWM_ICR1, DIV_8);
	MTIMER1_voidSetTopValue(20000, TOP_FPWM_ICR1);

	while(1){
		Reading_Value = MADC_u16GetValue(ADC_CHANNEL0);
		Mapped_Value = MAPPING(2250,450,1023,0, Reading_Value);
		Angle_degree = MAPPING(180, 0, 2250, 450, Mapped_Value);

		HLCD_SetCursor(0, 0);
		HLCD_SendString("Angle = ");
		HLCD_SendInt(Angle_degree);
		HLCD_SendString(" ");

		MTIMER1_voidSetDutyCycle(Mapped_Value);
	}
}

u16 MAPPING(u16 x_max, u16 x_min, u16 y_max, u16 y_min, u16 y){
	u16 x;
		x = ((((u32) (x_max - x_min) * (y - y_min)) / (y_max - y_min)) + x_min);
	return x;
}

/***************************************************************************************************************/



