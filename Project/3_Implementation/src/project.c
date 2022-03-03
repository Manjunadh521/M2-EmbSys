#include "homeauto.h"
int main(void)
{   int count=0;
int count1=0,count2=0;
int res=0;
int value;
char string;
int flag1=0;
char arr[4]={'1','2','3','4'};
LCD_Init();
up:
res=password(arr);
if(res==1){
	LCD_Clear();
	
	DDRC=0xFF;
   while(1)  
	{   LCD_Init();
	
        LCD_String_xy(0,1,"Press a key");
	    LCD_Command(0xc0);
		char result = keyfind();
		LCD_Char(result); 
		 
		if(result=='1')
		{ 
			
			 PORTC^=(1<<0);
			
		}
		else if(result=='2')
		{
		   PORTC^=(1<<1);
		   
		}
		
        else if(result=='3'){ 
			
			 PORTC ^=(1<<2);
			 
			 
			
		}
		else if(result=='4')
		{
		   PORTC^=(1<<3);
		  
		  
		}
		   else if(result=='5'){ 
			
			 PORTC ^=(1<<4);
			
			
		}
		else if(result=='6')
		{
		   PORTC^=(1<<6);
		}
		else if(result=='7')
		{
		   PORTB^=(1<<2);
		}
		else if(result=='8')
		{
		   PORTB^=(1<<3);
		}
		
	else if(result=='9'){
	char String[5];
	int value;
	LCD_Clear();
	ADC_Init();
	LCD_Init();			/* Initialization of LCD */
	LCD_Command(0xd4);
	LCD_String("TEMP: ");	/* Write string on 1st line of LCD */
			/* LCD16x2 cursor position */
		value=ADC_Read(5);	/* Read ADC channel 0 */
		int val = map(value, 492, 478, 20, 35);
		itoa(val,String,10);	/* Integer to string conversion */ 
		LCD_String(String);						
		LCD_String("  ");
		 _delay_ms(2500);
		LCD_Clear();
		 LCD_Init();
	 	}

		else if(result=='*'){
		   if(PORTC&(1<<2))
			 count1++;
			 if(PORTC&(1<<3))
			 count1++;
			 if(PORTC&(1<<4))
			 count1++;
			 if(PORTC&(1<<6))
			 count2++;
			  if(PORTB&(1<<3))
			 count2++;
			 if(PORTB&(1<<2))
			 count2++;
			LCD_Clear();
			
		//	LCD_String("light on:");
		 LCD_Char('l');LCD_Char('i');LCD_Char('g');LCD_Char('h');LCD_Char('t');LCD_Char('o');LCD_Char('n');LCD_Char(':');
			char charvalue=count1+'0'; //Converts int value into char but only happens for 0-9					
		   LCD_Char(charvalue);
		   _delay_ms(2500);
			LCD_Clear();
		LCD_Char('f');LCD_Char('a');LCD_Char('n');LCD_Char('o');LCD_Char('n');LCD_Char(':');
	    	char charvalue1=count2+'0';
            LCD_Char(charvalue1);
			count1=0;
			count2=0; 
			 _delay_ms(2500);
			LCD_Clear(); 
			LCD_String_xy(0,1,"Press a key");	
			
		}
        else if(result=='0')
		{ int result= 0;
		result=password(arr);
         if(result==1){
			 LCD_Clear();
			 LCD_Init();
			LCD_String("Resetpwd:");
			for(int i=0;i<4;i++){
				int res1=keyfind();
				arr[i]=res1;
               LCD_Char(res1);
				}
				}				
			}	
	         /* Display which key is pressed */
			else if(result=='#')
			{   PORTC=(0<<0);
				PORTC=(0<<2);
				PORTC=(0<<3);
				PORTC=(0<<4);
				goto up;
			}

	}
	
	}
	
}