






void I2C1_IRQHandler(void) {
	if (LL_I2C_IsActiveFlag_TXE(I2C1)) {	// Transmit data register empty flag
			I2C1->TXDR=data2sendX[ind2send++];
	}
}





void TIM16_IRQHandler(void)
{
if (LL_TIM_IsActiveFlag_UPDATE(TIM16)) {// 10us
	LL_TIM_ClearFlag_UPDATE(TIM16);
	delay_10us_cnt++;
	}
}




void TIM17_IRQHandler(void)
{
if (LL_TIM_IsActiveFlag_UPDATE(TIM17)) {// 1ms
	LL_TIM_ClearFlag_UPDATE(TIM17);
	delay_1ms_cnt++;
	whileOp1Delay_cnt++;

	}
}


