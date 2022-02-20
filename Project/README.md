# Home Automation System with Keypad Interface (H.A.S.K.I)

## Description
* This project is an Home Automation System with Keypad Interface (H.A.S.K.I) which is useful to control Light, Fans and Doors of our house with just pressing a number on our keypad.   
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

# Requirements
## Identifying features
* Keypad provided for easy access of available features.
* Automatic door open and close using motor system and automatic stop switches provided if rotating limit reached.
* LCD Display for better understanding of the option we pressed.
* Temperature detection and display in LCD.

## State of art/ Research
 Today's world is highly reliable on teachnology.Even the world around us is in our smart phone.So it would be good if we automate our own from any corner of the world.
 Here comes the requirement of our project where we can control our home with our Home Automation System with Keypad Interface(HASKI) from anywhere.This is a boon to us where we can get an option to control our home from anywhere we needed to operate it.
 
 ## 5W's 1H
![5w1h-questions-and-answer (2)](https://user-images.githubusercontent.com/94365143/154832159-976b2ffb-0ea9-4f5c-9d91-a3252c811f75.png)

## Swot Analysis
![image](https://user-images.githubusercontent.com/94365143/154832952-fa8c759f-44fd-47b2-9c2e-6c8b3ba21813.png)


## High Level Requirements
| ID | High Level Requirements |
| -------- | -------------- |
| HL1 | System should control Fan,Light,Doors automatically through keypad|
| HL2 | There should be a keypad interface |
| HL3 | Fans and Lights speeds are to be controlled |
| HL4 | System should detect temperature |


| ID | Low Level Requirements for HL1|       
| -------- | -------------- | 
| LL1 | According to the values of __Keypad__ control the doors,fans and speeds|      
| LL2 | User is alowed to select the operation should be done through __Keypad__ |
| LL3 | LCD and __Keyapad__ interfacing with micro controller|      
| LL4 | Fans,Lights and Doors should be controlled automatically with a click on	__Keypad__ |

| ID | Low Level Requirements for L1|       |ID | Low Level Requirements for L2|
| -------- | -------------- | ---- |-------- | -------------- |
| H1L1 | According to the values of __Keypad__ control the intensity of Fan,Light|      |H2L1 | __Keypad__ value should be displayed on LCD screen |
| H1L2 | Depending on values of __Kaypad__ controll the opening,closing of doors|       |H2L2 | __Keypad__ shoul be interfaced microcontroller |



| ID | Low Level Requirements for L3|  |ID | Low Level Requirements for L4|
| -------- | -------------- | ---- | -------- | -------------- |
| H3L1 | The  MicroController should send pwm signal to control __Fan__ speed |  | H4L1 | The  MicroController should send pwm signal to control __Light__ intensity |
| H3L2 | The Temperature __sensor__ is used to ddetect Temperature  |  | H4L2 | Temperature value should be displaced on LCD with __sensor__ Interfacing |

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







