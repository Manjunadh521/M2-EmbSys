# Home Automation System with Keypad Interface (H.A.S.K.I)
---
# Table of content
1. About the H.A.S.K.I
    1. Description
    1. Identifying features
    1. State of art
    1. 5W's & 1H and S.W.O.T analysis
1. Requirements
    1. High level requirements
    1. Low level requirements
1. Block Diagram and Blocks explination
    1. Block Diagram
    1. Sensors
    1. Actuators
    1. Micro controller and memory
    1. Sub-system and others
1. Test plan and Output
    1. High level test plan
    1. Low level test plan
1. Application
1. Current Progress
---

## Description
* This project is an Home Automation System with Keypad Interface (H.A.S.K.I). This system helps to control Light, Fans and Doors of our house. There is a keypad present which enables a feature on pressing each number. For example if we press 1 then it opens our maindoor and if we press 2 it closes our main door.There are several features such as fixing a password to our system and even temperature is displayed on our LCD.   
---
## Identifying features
* Keypad shall be provided to ease the access of available features.
* Automatic door opening and closing shall be provided along with automatic stop switches to stop once opened completely.
* LCD Display shall be provided to know the option we press.
* Room Temperature shall be displayed on LCD.
* Number of Fans and lights on or off shall be displayed on LCD.
* Security lock is provided to unlock the system.
---
## State of art
* The main focus of this project .
---
 ## 5W's 1H
![5w1h-questions-and-answer (2)](https://user-images.githubusercontent.com/94365143/154832159-976b2ffb-0ea9-4f5c-9d91-a3252c811f75.png)

## Requirements

## High Level Requirements
| ID | High Level Requirements |
| -------- | -------------- |
| HL1 | System should control Fan,Light,Doors automatically through keypad|
| HL2 | There should be a keypad interface |
| HL3 | Fans and Lights speeds are to be controlled |
| HL4 | System should detect temperature |

## Low Level Requirements
| ID | Low Level Requirements for HL1|       |ID | Low Level Requirements for HL2|
| -------- | -------------- | ---- |-------- | -------------- |
| H1L1 | According to the values of __Keypad__ control the intensity of Fan,Light|      |H2L1 | __Keypad__ value should be displayed on LCD screen |
| H1L2 | Depending on values of __Kaypad__ controll the opening,closing of doors|       |H2L2 | __Keypad__ shoul be interfaced microcontroller |


| ID | Low Level Requirements for HL3|  |ID | Low Level Requirements for HL4|
| -------- | -------------- | ---- | -------- | -------------- |
| H3L1 | The  MicroController should send pwm signal to control __Fan__ speed |  | H4L1 | The  MicroController should send pwm signal to control __Fan__ speed |
| H3L2 | The Temperature __sensor__ is used to ddetect Temperature  |  | H4L2 | Temperature value should be displaced on LCD with __sensor__ Interfacing |

## Swot Analysis
![image](https://user-images.githubusercontent.com/94365143/154832952-fa8c759f-44fd-47b2-9c2e-6c8b3ba21813.png)


## Block Diagram
![Screenshot 2022-02-19 002830](https://user-images.githubusercontent.com/94365143/154833746-7c08aee8-ccf7-46d9-83d2-2b20681be54e.png)

## Keypad:
* Provides an interface to press a number which helps in controlling Fan,Light and Doors of our house.
## Motor Driver Unit:
* Helps in driving the motor for our door and fan by providing required power for them.
## Front Stop Switch(MicroSwitch):
* Stops the door automatically by pressing switch itself when door is completely opened.
## Back Stop Switch(MicroSwitch):
* Stops the door automatically by pressing switch itself when door is completely opened.                                                             
## Clock:
* We are using internal clock of our micro controller.
## EEPROM:
* Memory module of Micro controller.
## LCD Display:
* Displays each and every value we enter in our keypad along with Temperature.
## Sensor(Light Detection):
* Helps to check the intensity of light in the room.
## Sensor(Temperature Detector):
* Helps to detect the temperature in the room.
## Light:
* Lightning inside the room is controlled by light.
## Fan:
* Temperature inside room is controlled by fan.
## MicroController:
* This is the main component which controls all the above mentioned part or thins of our embedded system.This interfaces keypad and LCD and controlls the fan,light and doors depending on the value we pressed on keypad.

## Current Simulation Progress:
![Screenshot 2022-02-20 140047](https://user-images.githubusercontent.com/94365143/154834794-2a57d638-eb82-4991-b589-90cbcbea8566.png)

* Done with Interfacing of keypad,LCD with MicroController. Door control is also completed.  


 





# Test plan and output

# HIGH LEVEL TEST PLAN

| Test ID | Description | Input | Expected output | Actual Output |
| --- | --- | --- | --- | --- |
| 01 | Thermistor | Room Temperature | Temperature(to volts) | Found |
| 02 | Keypad | 1 | 1(Door Opens) | Found |
| 03 | Keypad | 2 | 2(Door Closes) | Found |
| 04 | Keypad | 3 | 3(Door Opens) | Found |
| 05 | Keypad | 4 | 4(Light On) | To be Done |
| 06 | Keypad | 5 | 5(Light On 50% intensity) | To be Done |
| 07 | Keypad | 6 | 6(Light Off) | To be Done |
| 08 | Keypad | 7 | 7( Fan On) | To be Done |
| 09 | Keypad | 8 | 8(Fan speed 50%) | To be Done |
| 10 | Keypad | 9 | 9(Fan off) | To be Done |



# Low LEVEL TEST PLAN

| Test ID | Description | Input | Expected output | Actual Output |
| --- | --- | --- | --- | --- |
| 01 | LCD Display | 0 | 0 | Found |
| 02 | LCD Display | 1 | 1 | Found |
| 03 | LCD Display | 2 | 2 | Found |
| 04 | LCD Display | Manjunadh | Manjunadh | Found |
| 05 | Analog to Digital | To be Done | To be Done | To be Found |
| 06 | Analog to Digital | To be Done | To be Done | To be Found |








# M2-EmbSys
## Case study 1:Microwave Oven
![MicroWave_Oven](https://user-images.githubusercontent.com/94365143/154559985-02ae55d5-909e-49db-a7db-c1dfee166b0a.png)

## LCD Display
* Displays the amount of time we set for cooking and different modes of cooking.
## Buttons/Touch Screen
* Helps us in selecting time and mode of cooking.
## Safety Sensor
* This Safety lock sensor gives data to Micro Controller whether door is open or close while cooking. 
## Actuator (Safety Lock)
* Stops the oven if door is open while cooking
## Motor Driver
* Used to drive the motor (Actuator)
## Actuator (Motor)
* Rotates the food while cooking with the help of base plate so that food is cooked uniformly.
## Clock
* This is used to synchronize the Micro controller with other activities.
## Sensor (Heat Detector)
* This sensor gives temperature values to Micro controller and then the HVAC control unit is worked accordingly.
## ROM
* This is a memory module which store Data memory and Program memory respectively
## Relays and voltage Control Unit 
* This system consists of relays and transformer which are controlled by the micro controller.
## Magnetron
* This is activated according to the user selected input with the help of microcontroller.
## Actuator(Temp cut off switches)
* Cuts off the power supply by switching off if temperature exceeds certain limit.
## HVAC Control unit
* Heats and cools the system according to the temperature with the help of microcontroller
## MicroController
* Performs all the important operations and helps our oven to work correctly without any damages by controlling all the inputs and outputs accordingly.

## Case Study 2:Pico Projector
![Pico_Projector](https://user-images.githubusercontent.com/94365143/154559996-3512bb73-c0c2-406c-abff-fd488a855634.png)
## SDRAM
* This is a dynamic random access memory which is synchronised with clock speed for which our microcontroller is optimised
* This helps in accepting new data before finishing the processing of previous data 
## DDR Termination Regulator:
* These are power regulators that helps us conserving the power by conserving the rapidly increasing and decreasing currents.
DDR operates at very high switching speed thus bus termination resistors are needed to control the impedance of the clock lines.
## Analog audio,video Interface:
* VGA Port:Used to interface with the devices having graphic cards
* ypbpr or AV cables:Convert analog audio and video from components such as TV,Phone and PC's and convert it to HDMI signal.
## HDMI Port:
* A High Definition Multimedia Interface (HDMI) port used to receive and transmit both video signals and audio signals from source devices to a number of display monitors.
## Storage Interfaces:
* SD Card,USB Port
## Audio Output:
* Speakers
* SPDIF (Sony/Philips Digital Interface) is an audio transfer format interface. It transfers digital audio signals from one device to another without the need to first convert to an analog signal, which can degrade audio quality
## Back Light LED:
* Helps in enhancing the video output with RBG colour combination
## Light engine optic control
* The enhaced video content is projected out from lens with the combination of Red,Blue,Green light with Back light.This helps
to transmit our video to remmote locations
## Remote control(Radio frequency)
* Helps in interfacing with projector manually with keypad, LED'S and buttons
## Temperature sensor
* Detects over heating and Switch offs the projector 
## Discretes
* Discrete devices are single semiconductors like diodes or transistors helps to regulate voltages, helps in lower power consumption, and reduce heat generation.
## MicroController
* Performs all the important operations and helps our Pico Projector to work correctly without any damages by controlling all the inputs and outputs accordingly.
