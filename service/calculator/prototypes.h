/*
 * prototypes.h
 *
 * Created: 16 - 9 - 2024 1  :  07  :  22 PM
 *  Author: Abu_El_A7ZaaM
 */ 


#ifndef PROTOTYPES_H_
#define PROTOTYPES_H_

#include "../../MCAL/DIO/DIO_interface.h"
#include "../../LIB/STD_types.h"
#include "../../LIB/BIT_math.h"


typedef struct
{
	u16 res;
	u8 op;
	
}cal;


cal oper(void);
void calculator(cal operand1,cal operand2);


#endif /* PROTOTYPES_H_ */