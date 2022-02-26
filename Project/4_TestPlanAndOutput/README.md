# 1.1 HIGH LEVEL TEST PLAN

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

# 1.2 LOW LEVEL TEST PLAN

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
