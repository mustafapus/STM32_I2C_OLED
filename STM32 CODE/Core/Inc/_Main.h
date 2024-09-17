#include "_Set_Timers.h"

///////////////////////////// I2C Settings //////////////////////////////

LL_I2C_DeInit(I2C1);
LL_I2C_EnableIT_TX(I2C1);
LL_I2C_Enable(I2C1);
LL_I2C_SetSlaveAddr(I2C1, 0x78);

delay_1ms(300);

///////////////////////////// Interrupt Priorities //////////////////////////////

NVIC_SetPriority(SysTick_IRQn, 2);
NVIC_SetPriority(TIM16_IRQn, 3);
NVIC_SetPriority(TIM17_IRQn, 3);


///////////////////////////// DISPLAY INIT //////////////////////////////
SSD1306_Init();
SSD1306_UpdateScreen();

