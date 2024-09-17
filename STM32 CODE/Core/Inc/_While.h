

if(whileOp1Delay_cnt>=1000){


SSD1306_GotoXY (24, 0);
SSD1306_Puts ("STANDART", &Font_11x18, 1);

SSD1306_GotoXY (10, 18);
SSD1306_Puts ("17/09/2024", &Font_11x18, 1);

SSD1306_GotoXY (20, 34);
SSD1306_Puts ("CARSAMBA", &Font_11x18, 1);

SSD1306_GotoXY (36, 52);
SSD1306_Puts ("CARSAMBA", &Font_7x10, 1);

SSD1306_UpdateScreen();
whileOp1Delay_cnt=0;
}


