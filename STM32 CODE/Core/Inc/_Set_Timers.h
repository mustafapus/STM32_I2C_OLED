////////////SysTick Settings///////////////////
 SysTick->VAL   = 0xffffff;			// SysTick Current Value Register (Start Value)
 SysTick->LOAD  = 0xffffff;					// Reload value
 SysTick->CTRL  = 0b100;				// Control Reg. CLK SRC | INT EN | CNT EN;
////////////SysTick Settings///////////////////
//////////////TIM1 Settings///////////////
//LL_TIM_EnableIT_UPDATE(TIM1);
//TIM1->ARR=65535;
//TIM1->PSC=100;
//LL_TIM_EnableCounter(TIM1);
//////////////TIM1 Settings///////////////
//////////TIM2 Settings///////////////////
// LL_TIM_EnableIT_UPDATE(TIM2);
// LL_TIM_SetPrescaler(TIM2, 1);	// 48e6 2ms
// LL_TIM_EnableCounter(TIM2);
// LL_TIM_SetAutoReload(TIM2, 47999);
//////////TIM2 Settings///////////////////
//////////////TIM3 Settings///////////////
//LL_TIM_EnableIT_UPDATE(TIM3);
//TIM3->ARR=65535;
//TIM3->PSC=100;
//LL_TIM_EnableCounter(TIM3);
//////////TIM3 Settings///////////////////
//////////////TIM4 Settings///////////////
// LL_TIM_EnableIT_UPDATE(TIM4);
// LL_TIM_SetPrescaler(TIM4, 7);
// LL_TIM_EnableCounter(TIM4);
// LL_TIM_SetAutoReload(TIM4, 51500);
//////////TIM4 Settings///////////////////
//////////TIM6 Settings///////////////////			//FRQ Calc
// LL_TIM_EnableIT_UPDATE(TIM6);	// 48e6 23ms
// LL_TIM_SetPrescaler(TIM6, 19);
// LL_TIM_EnableCounter(TIM6);
// LL_TIM_SetAutoReload(TIM6, 55199);
//////////TIM6 Settings///////////////////
//////////TIM7 Settings/////////////////// 
// LL_TIM_EnableIT_UPDATE(TIM7);
// LL_TIM_SetPrescaler(TIM7, 0);
// LL_TIM_EnableCounter(TIM7);
// LL_TIM_SetAutoReload(TIM7, 41999);
//////////TIM7 Settings///////////////////
//////////TIM8 Settings///////////////////			// General counter
// LL_TIM_EnableIT_UPDATE(TIM8);
// LL_TIM_SetPrescaler(TIM8, 0);
// LL_TIM_EnableCounter(TIM8);
// LL_TIM_SetAutoReload(TIM8, 47999);
// LL_TIM_CC_EnableChannel(TIM8, LL_TIM_CHANNEL_CH4);
// LL_TIM_EnableCounter(TIM8);
// TIM8->ARR=frqosc/((TIM8->PSC+1)*frq1*1000);
// TIM8->CCR4=( TIM8->ARR*(100-duty1) ) / 100 ;
// TIM8->PSC = 0;
//////////TIM8 Settings///////////////////
//////////TIM15 Settings///////////////////
// LL_TIM_EnableIT_UPDATE(TIM15);
// LL_TIM_SetPrescaler(TIM15, 0);
// LL_TIM_EnableCounter(TIM15);
// LL_TIM_SetAutoReload(TIM15, 15);
//////////TIM15 Settings///////////////////
//////////TIM14 Settings///////////////////
//LL_TIM_EnableIT_UPDATE(TIM14);
//LL_TIM_SetPrescaler(TIM14, 0);
//LL_TIM_EnableCounter(TIM14);
//LL_TIM_SetAutoReload(TIM14,65535);
//////////TIM14 Settings///////////////////
//////////TIM16 Settings///////////////////
LL_TIM_EnableIT_UPDATE(TIM16);
LL_TIM_SetPrescaler(TIM16, 1);
LL_TIM_EnableCounter(TIM16);
LL_TIM_SetAutoReload(TIM16,479);
//////////TIM16 Settings///////////////////
//////////TIM17 Settings///////////////////
LL_TIM_EnableCounter(TIM17);
LL_TIM_EnableIT_UPDATE(TIM17);
TIM17->PSC=0;
TIM17->ARR=47999;
//////////TIM17 Settings///////////////////
