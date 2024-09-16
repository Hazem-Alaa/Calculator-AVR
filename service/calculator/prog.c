/*
 * prog.c
 *
 * Created: 16 - 9 - 2024 1  :  06  :  45 PM
 *  Author: Abu_El_A7ZaaM
 */ 

#include "prototypes.h"

cal oper(void)
{
	u8 VAL = 255;
	cal result = {0};
	u8 temp = 1;
	
	do
	{
		temp = (result.res)*10;
		VAL = KPD_u8GetKey();
		if(VAL != 255)
		{

			if (VAL != '*' && VAL != '+' && VAL !='/' && VAL !='-'&& VAL !='=')
			{
				result.res = temp + VAL;
				LCD_voidWriteNum(VAL);
			}
			else if (VAL != '*' || VAL != '+' || VAL !='/' || VAL !='-'|| VAL !='=')
			{
				LCD_voidWriteChar(VAL);
				result.op=VAL;
				break;
			}
		}
	}while (VAL != '*' || VAL != '+' || VAL !='/' || VAL !='-'|| VAL !='='|| VAL != 'C');
	return result;
}


void calculator(cal operand1,cal operand2)
{

	u16 f=0;
	switch(operand1.op)
	{
		case '+':
		f=operand1.res+operand2.res;
		LCD_voidWriteNum(f);
		break;
		
		case '-':
		f=operand1.res-operand2.res;
		LCD_voidWriteNum(f);
		break;
		
		case '/':
		f=operand1.res/operand2.res;
		LCD_voidWriteNum(f);
		break;
		
		case '*':
		f=operand1.res*operand2.res;
		LCD_voidWriteNum(f);
		break;
		
		default:
		LCD_voidWriteStrig("no operation");
		break;
	}

}


