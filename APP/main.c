#include "../MCAL/DIO/DIO_interface.h"
#include "../HAL/KEYPAD/KPD_int.h"
#include "../HAL/LCD/LCD_int.h"
#include "../service/calculator/prototypes.h"

int main(void)
{

	LCD_voidLCDInit();
	KPD_voidKPDInit();
	
	cal operand1 ={0};
	cal operand2 ={0};
	while (1)
	{
		operand1 = oper();
		operand2 = oper();
		calculator(operand1,operand2);
	}
}

