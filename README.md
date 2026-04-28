# Description
Delving into the wonders that is Embedded Systems, this the first "real world" project. With a fresh understanding Embedded Systems from Udemy, this project is to engineer an air purifier that currently has a non-working board, wired up utilizing a STM32 Nucleo board and a MOSFET transistor.

Code will all be done in C and utilizing STMCubeIDE along with limited use of the HAL libraries.

The goal here is to create the Header file for the MCU along with initializing the peripherals.

## Tools
STM32 Nucleo Board

MOSFET Transistor

Jumper Wires 

## Setup
This project will run on a few simple (hopefully) files which would include:
-gpio h/c file for register mapping and functions
-main C for the infinite while loop
-stm32c031 for mcu mapping and addressing

## To Do
- [x] Create files for GPIO and MCU specific registers
- [] Mapping the MCU memory 
- [] GPIO initializing and de-init