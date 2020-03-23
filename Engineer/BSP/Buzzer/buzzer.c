#include "buzzer.h"


/*
	Some reference tune
	
	low 5
	buzzer_on(31, 5000);
	
	1
	buzzer_on(31, 5000);
	
	2
	buzzer_on(42, 5000);
	
	3
	buzzer_on(24, 5000);
		
	4
	buzzer_on(23, 5000);
	
	5
	buzzer_on(20, 5000);
	
	6
	buzzer_on(18, 5000);
	
	7
	buzzer_on(16, 5000);
	
	high 1
	buzzer_on(15, 5000);
	*/
	
	
void buzzer_on(uint16_t psc, uint16_t pwm){
	__HAL_TIM_PRESCALER(&htim12, psc);
  __HAL_TIM_SetCompare(&htim12, TIM_CHANNEL_1, pwm);
}

void buzzer_off(void)
{
  __HAL_TIM_SetCompare(&htim12, TIM_CHANNEL_1, 0);
}
