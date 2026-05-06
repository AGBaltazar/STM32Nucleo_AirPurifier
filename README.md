# Description
Delving into the wonders that is Embedded Systems, this the first "real world" project. With a fresh understanding Embedded Systems from Udemy, this project is to engineer an ~~air purifier~~ self watering planter utilizing a STM32 Nucleo board, air purifier shell, 12v DC submersible water pump, and various electronics

Code will all be done in C and utilizing STMCubeIDE along with limited use of the HAL libraries.

The goal here is to create the Header file for the MCU along with initializing the peripherals to allow the submersible water pump be controlled at the push of a button.

## Tools Utilized
STM32 Nucleo Board

MOSFET Transistor

Jumper Wires 

12v Submersible Water Pump + hoses

Air Purifier Shell

## Setup
This project will run on a few simple (hopefully) files which would include:
-gpio h/c file for register mapping and functions
-main C for the infinite while loop
-stm32c031 for mcu mapping and addressing

## To Do
- [x] Create files for GPIO and MCU specific registers
- [x] Mapping the MCU memory 
- [] Mapping peripherals
- [] GPIO initializing and de-init

## Phases
### Phase 1
Turning on the water pump at the push of a button

### Phase 2
Setup timers to release water at controlled intervals such as specific times

### Phase 3
Autonomize the project and add in a soil moisture sensor that will automatically water the plants and alert when needing refil

### Phase 4 
Possibly move over to an ESP32 wifi capable board to intergrate IoT functions