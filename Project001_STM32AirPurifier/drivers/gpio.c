/*
 * gpio.c
 *
 *  Created on: Apr 28, 2026
 *      Author: Alejandro
 */
#include "gpio.h"
#include <stdint.h>
#include "stm32c031.h"

void GPIO_PeriClockControl(GPIO_Reg_Def_t *pGPIOx, uint8_t EnorDi){
	if (EnorDi == ENABLE){
		if(pGPIOx == GPIOA){
				GPIOA_PCLK_EN();
		}
		else if(pGPIOx == GPIOB){
					GPIOB_PCLK_EN();
				}
	} else{
		if(pGPIOx == GPIOA){
				GPIOA_PCLK_DI();
				}
		else if(pGPIOx == GPIOB){
				GPIOB_PCLK_DI();
				}
	}
}


void GPIO_Init(GPIO_HANDLE_t *pGPIOHandle){
	uint32_t temporary=0;

	GPIO_PeriClockControl(pGPIOHandle->pGPIOx, ENABLE);

	// 1. Configure the PIN
	if(pGPIOHandle->GPIO_PinConfig.GPIO_PinMode <= GPIO_MODE_ANALOG){
		//WE are going to get the pin value
		temporary = (pGPIOHandle->GPIO_PinConfig.GPIO_PinMode << (2*pGPIOHandle->GPIO_PinConfig.GPIO_PinNumber));
		pGPIOHandle->pGPIOx->MODER &= ~(0x3 << pGPIOHandle->GPIO_PinConfig.GPIO_PinNumber);//Clears teh mode
		//Now we are storing the value into the actual register using the base address
		pGPIOHandle->pGPIOx->MODER |= temporary;

	}else{
		//GPIO pin is in interrupt mode
	}

	//2. Configure the Speed
	temporary = 0;
	temporary = (pGPIOHandle->GPIO_PinConfig.GPIO_PinSpeed << (2*pGPIOHandle->GPIO_PinConfig.GPIO_PinSpeed));
	pGPIOHandle->pGPIOx->OSPEEDR &= ~(0x3 << pGPIOHandle->GPIO_PinConfig.GPIO_PinNumber);
	pGPIOHandle->pGPIOx->OSPEEDR |= temporary;

	temporary = 0;
	//3. Configure the Pull UP/Down setting
	temporary = (pGPIOHandle->GPIO_PinConfig.GPIO_PinPuPdControl << (2*pGPIOHandle->GPIO_PinConfig.GPIO_PinPuPdControl));
	pGPIOHandle->pGPIOx->PUPDR &= ~(0x3 << pGPIOHandle->GPIO_PinConfig.GPIO_PinNumber);
	pGPIOHandle->pGPIOx->PUPDR |= temporary;
	temporary = 0;

	//4. Configure the output type (otype)
	temporary = (pGPIOHandle->GPIO_PinConfig.GPIO_PinOPType << (pGPIOHandle->GPIO_PinConfig.GPIO_PinOPType));
	pGPIOHandle->pGPIOx->OTYPER &= ~(0x1 << pGPIOHandle->GPIO_PinConfig.GPIO_PinNumber);
	pGPIOHandle->pGPIOx->OTYPER |= temporary;


}


