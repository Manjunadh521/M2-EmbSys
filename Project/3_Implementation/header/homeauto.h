#ifndef __HOMEAUTO__H__
#define __HOMEAUTO__H__

#ifndef __AVR_ATmega328__
#define __AVR_ATmega328__
#endif
#define F_CPU 8000000UL
#include <avr/io.h>
#include <util/delay.h>
#include <stdlib.h>
#define DIS_DDR		DDRC    /* Define data port direction for Output */
#define DIS_PRT 	PORTC   /* Define data port for Output*/
#define DIS_PIN		PINC    /*Define data read pin for Output*/

#define KEY_DDR		DDRD    /* Define data port direction for Keypad */
#define KEY_PRT 	PORTD   /* Define data port for keypad*/
#define KEY_PIN		PIND    /*Define data read pin for Keypad*/

#define LCD_Dir DDRB		/* Define LCD data port direction */
#define LCD_Port PORTB		/* Define LCD data port */
#define RS PB0				/* Define Register Select pin */
#define EN PB1 				/* Define Enable signal pin */


void LCD_Command( unsigned char cmnd );
void LCD_Char( unsigned char data );
void LCD_Init (void);
void LCD_String (char *str);
void LCD_String_xy (char row, char pos, char *str);
void LCD_Clear();
char keyfind();
int ADC_Read(char channel);
void ADC_Init();
long map(long x, long in_min, long in_max, long out_min, long out_max) ;
#endif