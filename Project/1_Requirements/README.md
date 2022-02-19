## Identifying features
* Keypad provided for easy access of available features.
* Automatic door open and close using motor system and automatic stop switches provided if rotating limit reached.
* LCD Display for better understanding of the option we pressed.
* Temperature detection and display in LCD.

## State of art/ Research
 Today's world is highly reliable on teachnology.Even the world around us is in our smart phone.So it would be good if we automate our own from any corner of the world.
 Here comes the requirement of our project where we can control our home with our Home Automation System with Keypad Interface(HASKI) from anywhere.This is a boon to us where we can get an option to control our home from anywhere we needed to operate it.

## 4 W's and 1H
# Who
People having house.
# What
Home control through our Home Automation System with Keypad Interface.
# When
Whenever people want to control their house automatically.
# Where
Anywhere inside the house.
# How
Just using a Keypad.


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

| ID | Low Level Requirements for HL1|       |ID | Low Level Requirements for HL2|
| -------- | -------------- | ---- |-------- | -------------- |
| H1L1 | According to the values of __Keypad__ control the intensity of Fan,Light|      |H2L1 | __Keypad__ value should be displayed on LCD screen |
| H1L2 | Depending on values of __Kaypad__ controll the opening,closing of doors|       |H2L2 | __Keypad__ shoul be interfaced microcontroller |



| ID | Low Level Requirements for HL3|  |ID | Low Level Requirements for HL4|
| -------- | -------------- | ---- | -------- | -------------- |
| H3L1 | The  MicroController should send pwm signal to control __Fan__ speed |  | H4L1 | The  MicroController should send pwm signal to control __Light__ intensity |
| H3L2 | The Temperature __sensor__ is used to ddetect Temperature  |  | H4L2 | Temperature value should be displaced on LCD with __sensor__ Interfacing |



