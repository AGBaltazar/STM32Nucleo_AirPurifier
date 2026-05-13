/*
 * gpio.h
 *
 *  Created on: Apr 28, 2026
 *      Author: Alejandro
 */

#ifndef GPIO_H_
#define GPIO_H_
#include <stdint.h>


#include "stm32c031.h"

typedef struct{
	uint8_t GPIO_PinNumber;
	uint8_t GPIO_PinMode;
	uint8_t GPIO_PinSpeed;
	uint8_t GPIO_PinPuPdControl;
	uint8_t GPIO_PinOPType;
	uint8_t GPIO_PinAltFunMode;

}GPIO_PinConfig_t;

typedef struct{
	//Initiates a pointer to the base address
	GPIO_Reg_Def_t *pGPIOx;
	GPIO_PinConfig_t GPIO_PinConfig;

}GPIO_HANDLE_t;


//GPIO POSSIBLE PIN NUMBERS
#define GPIO_PIN_NO_0		0
#define GPIO_PIN_NO_1		1
#define GPIO_PIN_NO_2		2
#define GPIO_PIN_NO_3		3
#define GPIO_PIN_NO_4		4
#define GPIO_PIN_NO_5		5
#define GPIO_PIN_NO_6		6
#define GPIO_PIN_NO_7		7
#define GPIO_PIN_NO_8		8
#define GPIO_PIN_NO_9		9
#define GPIO_PIN_NO_10		10
#define GPIO_PIN_NO_11		11
#define GPIO_PIN_NO_12		12
#define GPIO_PIN_NO_13		13
#define GPIO_PIN_NO_14		14
#define GPIO_PIN_NO_15		15

/*GPIO PIN POSSIBLE MODES*/
#define	GPIO_MODE_IN		0
#define GPIO_MODE_OUT		1
#define GPIO_MODE_ALT		2
#define GPIO_MODE_ANALOG	3
#define GPIO_MODE_IT_FT		4
#define GPIO_MODE_IT_RT		5
#define GPIO_MODE_IT_RFT	6

/*GPIO pin output types*/
#define GPIO_OPTYPE_PP		0
#define GPIO_OPTYPE_OD		1


//GPIO pin output speeds
#define GPIO_SPEED_LOW		0
#define GPIO_SPEED_MEDIUM	1
#define GPIO_SPEED_FAST		2
#define GPIO_SPEED_HIGH		3

//GPIO port pull-up/pull-down register (GPIOx_PUPDR)
#define GPIO_PUPDR_NO		0
#define GPIO_PUPDR_PU		1
#define GPIO_PUPDR_PD		2

//Now to initialize the APIs which are just functions that get called that change the GPIO
void GPIO_Init(GPIO_HANDLE_t *pGPIOHandle);
void GPIO_PeriClockControl(GPIO_Reg_Def_t *pGPIOx, uint8_t EnorDi);


#endif /* GPIO_H_ */
