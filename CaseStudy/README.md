# M2-EmbSys
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

---
# 1 About the H.A.S.K.I
## 1.1 Description
* This project is an Home Automation System with Keypad Interface (H.A.S.K.I). This system helps to control Light, Fans and Doors of our house. There is a keypad present which enables a feature on pressing each number. For example if we press 1 then it opens our maindoor and if we press 2 it closes our main door.There are several features such as fixing a password to our system and even temperature is displayed on our LCD.   
---
## 1.2 Identifying features
* Keypad shall be provided to ease the access of available features.
* Automatic door opening and closing shall be provided along with automatic stop switches to stop once opened completely.
* LCD Display shall be provided to know the option we press.
* Room Temperature shall be displayed on LCD.
* Number of Fans and lights on or off shall be displayed on LCD.
* Security lock is provided to unlock the system.
---
## 1.3 State of art
* The main focus of this project is to control Doors,Fans and Lights through a remote. A security code shall be fixed which ensures security to our house even when remote is misplaced. A LCD screen can be seen which displays the option we enter and also the present status of number of Lights and Fans on or off can be seen. By combining all these features a final product is made known as H.A.S.K.I. As the technology is increasing rapidly these kind of automations are very useful in our daily lives.
---
 ## 1.4 5W's 1H
![5w1h-questions-and-answer (2)](https://user-images.githubusercontent.com/94365143/154832159-976b2ffb-0ea9-4f5c-9d91-a3252c811f75.png)
## Swot Analysis
![image](https://user-images.githubusercontent.com/94365143/154832952-fa8c759f-44fd-47b2-9c2e-6c8b3ba21813.png)

---
# 2 Requirements
## 2.1 High Level Requirements
| ID | High Level Requirements |
| -------- | -------------- |
| HLR1 | System shall control Fan,Light,Doors by pressing a number on Keypad |
| HLR2 | There shall be a LCD to display the numbers we press |
| HLR3 | A password shall be provided for our system |
| HLR4 | System shall detect temperaure |

## 2.2 Low Level Requirements

| ID | Low Level Requirements for HL1|       |ID | Low Level Requirements for HL2|
| -------- | -------------- | ---- |-------- | -------------- |
| LLR1.1 |  According to the values of __Keypad__  Fan,Light shall be controlled | | LLR2.1 | Entered value on keypad shall be displayed on __LCD__ Screen |
| LLR1.2 | According to the values of __Kaypad__ opening,closing of doors shall be controlled || LLR2.2 | Number of Lights and Fans On __LCD__ Screen |
     
| ID | Low Level Requirements for HL3|  |ID | Low Level Requirements for HL4|
| -------- | -------------- | ---- | -------- | -------------- |
| LLR3.1 |  Device shall open when the __Password__ is matched | | LLR4.1 | __Temperature Sensor__ shall detect the room temperature |
| LLR3.2 | Device shall ask to Re-Enter the __Password__ again if entered one is wrong || LLR4.2 | The temperature detected by  __Temperature Sensor__ shall be printed on LCD Screen |
---

# 3 Block Diagram and Blocks explination
## 3.1 BLOCK DIAGRAM
![csmicrowaveoven drawio (1)](https://user-images.githubusercontent.com/94365143/155744126-970fa92c-6787-4c1e-af1d-46a8aad3d82f.png)
## 3.2 SENSORS
* ### Temperature Sensor (Thermistor)
    * This Thermistor is a resistor whose resistance is dependent on temperature here this change in resistence produces change in voltage, this voltage is taken as input to micro controller.
* ### Keypad:
    *  Provides an interface to press a number which helps in controlling Fan,Light and Doors of our house.
* ### Front Stop Switch(MicroSwitch):
    * Stops the door automatically by pressing switch itself when door is completely opened.
* ### Back Stop Switch(MicroSwitch):
    * Stops the door automatically by pressing switch itself when door is completely opened. 

## 3.3 ACTUATORS
* ### LCD Display:
    * Displays each and every value we enter in our keypad along with Temperature.
* ### Light:
    * Lightning inside the room is controlled by light.
* ### Fan:
    * Temperature inside room is controlled by fan.
* ### Motor:
    * Helps in opening and closing our doors.
    
## 3.4 MICRO CONTROLLER AND MEMORY
* ### EEPROM
    * Here this is actually inside the microcontroller
* ### Clock
    * Here we are using internal clock of our micro controller.
* ### MicroController:
    * This is the main component which controls all the above mentioned part or thins of our embedded system.This interfaces keypad and LCD and controlls the fan,light and doors depending on the value we pressed on keypad.
   
 ## 3.5 SUBSYSTEM & OTHERS
* ### Motor Driver Unit:
    * Helps in driving the motor for our door and fan by providing required power for them(we use motor driver L293183). 
---
# 4 Test plan and output

# 4.1 HIGH LEVEL TEST PLAN

| Test ID | Description | Input | Expected output | Actual Output | Passed Or Not |
| --- | --- | --- | --- | --- | --- |
| 01 | Thermistor | Room Temperature(25°C) | Temperature(25°C) | Temperature(25°C) | To be Done |
| 01 | Thermistor | Room Temperature(35°C) | Temperature(35°C) | Temperature(35°C) | To be Done |
| 02 | Keypad | 1 | 1(Door Opens) | 1(Door Opens) | To be Done |
| 03 | Keypad | 2 | 2(Door Closes) | 2(Door Closes) | To be Done |
| 04 | Keypad | 3 | 3(Ligh On) | 3(Ligh On) | To be Done |
| 05 | Keypad | 3 | 3(Light Off) | 3(Light Off) | To be Done |
| 06 | Keypad | 4 | 4(Fan On) | 4(Fan On) | To be Done |
| 07 | Keypad | 4 | 4(Fan Off) | 4(Fan Off) | To be Done |
| 08 | Keypad | * | * (No of Fan On and Light On) | * (No of Fan On and Light On) | To be Done |
| 09 | Keypad | # | # (Restarts our system) | * (Restarted our system) | To be Done |

### Here below are the some of the *unity test/ unity framework* test plans there are so many but I have only mentiones some of the test cases here.

# 4.2 LOW LEVEL TEST PLAN

| Test ID | Description | Input | Expected output | Actual Output | Passed Or Not |
| --- | --- | --- | --- | --- | --- |

| Test ID (for LCD)| Description | Input | Expected output | Actual Output | passed/not |
| --- | --- | --- | --- | --- | --- |
| 01 | Check for LCD_Char() | A  | A |  A | To be done |
| 02 | Check for LCD_String() | Manjunadh | Manjunadh | Manjunadh | To be done |
| 03 | Check for LCD_String() | Home | Home | Home | To be done |


| Test ID (for ADC)| Description | Input | Expected output | Actual Output | passed/not |
| --- | --- | --- | --- | --- | --- |
| 01 | Check for ADC_Read() | To be done | To be done |  To be done | To be done |
| 02 | Check for ADC_Read() | To be done | To be done |  To be done | To be done |

| Test ID (for mapping, map)| Description | Input | Expected output | Actual Output | passed/not |
| --- | --- | --- | --- | --- | --- |
| 01 | Check for map() | To be done | To be done |  To be done | To be done |
| 02 | Check for map() | To be done | To be done |  To be done | To be done |
| 03 | Check for map() | To be done | To be done |  To be done | To be done |
---
# 5 Application
* This system can be used in Automation of Houses,Industries,Stadiums etc...
* This system can be used in Light Control of Houses,Industries,Stadiums etc...
* This system can be used in Fan Control of Houses,Industries,Stadiums etc...
* This system can be used in Door Control of Houses,Industries,Stadiums etc...
* This system can be used in Automatic Temperature Detector of Houses,Industries,Stadiums etc...
* This system can be used to know number of appliances "On" status of Houses,Industries,Stadiums etc... 
---


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
