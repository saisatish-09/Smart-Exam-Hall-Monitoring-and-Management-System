//project.h
#include "types.h"
//-------------------------------------------delay.h------------------------------------
//#include "types.h"
void delay_us(u32);
void delay_ms(u32);
void delay_s(u32);

//--------------------------------------------lcd.h-------------------------------------
//#include "types.h"
void writeLcd(u8);
void cmdLcd(u8);
void InitLcd(void);
void charLcd(u8);
void strLcd(s8*);
void u32Lcd(u32);
void s32Lcd(s32);
void f32Lcd(f32,u32);
void BuildCGram(u8*,u32);

//--------------------------------------------adc.h--------------------------------------
//#include "types.h"
void Init_ADC(void);
void Read_ADC(u32 CHNO,u32* AdcVal,f32* eAR);

//--------------------------------------------lm35.h--------------------------------------
//#include "types.h"
f32 Read_LM35DegC(void);
f32 Read_LM35DegF(void);