/*
 * stm32c031.h
 *
 *  Created on: Apr 28, 2026
 *      Author: Alejandro
 */

#ifndef STM32C031_H_
#define STM32C031_H_

#define __vo volatile

/*Defining the base address of flash and SRAM based off docs*/
//In this header file we will be defining base addresses of memory, peripherals along with structures that contain the peripherals registers as needed

#define FLASH_BASEADDR	0x08000000U
#define SRAM1_BASEADDR	0x20000000U
#define ROM				0x00000000U
#define SRAM			SRAM1_BASEADDR

#define IOPORT_BASEADDR 0x50000000U
#define AHB_BASEADDR	0x40020000U
#define APB1_BASEADDR   0x40000000U
#define APB2_BASEADDR   0x40010000U

/*Now to further define peripherals of the IOPORT*/

#define GPIOA_BASEADDR  (IOPORT_BASEADDR + 0x0000U)
#define GPIOB_BASEADDR  (IOPORT_BASEADDR + 0x0400U)
#define GPIOC_BASEADDR  (IOPORT_BASEADDR + 0x0800U)
#define GPIOD_BASEADDR  (IOPORT_BASEADDR + 0x0C00U)
#define GPIOF_BASEADDR  (IOPORT_BASEADDR + 0x1400U)

/*Defining the peripherals on the AHB Bus*/
#define RCC_BASEADDR (AHB_BASEADDR + 0x1000U)

//Defining the registers that will be adjusted/activated
typedef struct{
	__vo uint32_t MODER; //GPIO port mode register
	__vo uint32_t OTYPER; //GPIO port output type register
	__vo uint32_t PUPDR; //GPIO port pull-up/pull-down register
	__vo uint32_t ODR; //GPIO port output data register
	__vo uint32_t IDR; //GPIO port input data register
}GPIO_Reg_Def_t;

typedef struct{
	__vo uint32_t IOPENR; //RCC I/O port clock enable register
}RCC_Reg_Def_t;

#define GPIOA	((GPIO_Reg_Def_t*)GPIOA_BASEADDR)
#define GPIOB	((GPIO_Reg_Def_t*)GPIOB_BASEADDR)
#define GPIOC	((GPIO_Reg_Def_t*)GPIOC_BASEADDR)
#define GPIOD	((GPIO_Reg_Def_t*)GPIOD_BASEADDR)
#define GPIOF	((GPIO_Reg_Def_t*)GPIOF_BASEADDR)
#define RCC 	((RCC_Reg_Def_t*)RCC_BASEADDR)

#endif /* STM32C031_H_ */
