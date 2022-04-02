/*
 * ESE519_Lab4_Pong_Starter.c
 *
 * Created: 9/21/2021 21:21:21 AM
 * Author : emurerwa
 */ 

#define F_CPU 16000000UL

#include <avr/io.h>
#include "lib\ST7735.h"
#include "lib\LCD_GFX.h"

void Initialize()
{
	lcd_init();
	
	
}

int main(void)
{
	Initialize();
	LCD_setScreen(WHITE);
	bool humanWins = false; //has human won?
	bool computerWins = false; // has computer won?
	//computer pad
	uint8_t cx0 = 0;
	uint8_t cy0 = 0;
	uint8_t cx1 = 15;
	uint8_t cy1 = 15;
	uint16_t ccolor = BLACK;
	//human pad
	uint8_t hx0 = 0;
	uint8_t hy0 = 127;
	uint8_t hx1 = 15;
	uint8_t hy1 = 127;
	uint16_t hcolor = BLUE;
	//Ball
	uint8_t bx0 = 80; 
	uint8_t by0 = 64;
	uint8_t radius = 15;
	uint16_t bcolor = RED;
	//edges
	int edge = 0; // are we at the edges?
	
		
    while (1) 
    {
	if(edge == 0) {
		LCD_drawBlock( cxo, cyo, cx1, cy1, pcolor);
	        LCD_drawBlock( hxo, hyo, hx1, hy1, hcolor);
	        cy0 += 1;
	        cy1 += 1;
	        hy0 += 1;
	        hy1 += 1;
		if(cy1>=127){
		edge = 1;
		}
	} 
	    if(edge == 1){
		LCD_drawBlock( cxo, cyo, cx1, cy1, pcolor);
	        LCD_drawBlock( hxo, hyo, hx1, hy1, hcolor);
		cy- -=1;
		cy1 -= 1;
		hy0 -= 1;
		hy1 -= 1;
		if(cy1<=15){
		edge = 0;
		}
		    
		    

	    
	    
	    
    }
}
