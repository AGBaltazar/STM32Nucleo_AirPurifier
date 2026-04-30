/*
 * stm32c031.h
 *
 *  Created on: Apr 28, 2026
 *      Author: Alejandro
 */

#ifndef STM32C031_H_
#define STM32C031_H_

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


#endif /* STM32C031_H_ */
