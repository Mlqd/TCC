/*
 * File:   lcd.c
 * Author: douglasdoporto@live.com
 *
 * Created on 3/11/2018 5:08:33 PM UTC
 * "Created in MPLAB Xpress"
 */

#include "lcd.h"

void sendLcd(void) {
    LCD_EN = 1;
    LCD_EN = 0;
}

void writeLcd(char c) {   
    LCD_BITS = (unsigned char)((LCD_BITS & 0xF0) | (0x0F & c>>4));
    sendLcd();  
    __delay_us(5);
    LCD_BITS = (unsigned char)((LCD_BITS & 0xF0) | (0x0F & c));
    sendLcd();
    __delay_ms(5);
}

void clearLcd(void) {
    LCD_RS = 0;
    writeLcd(0x1);
    __delay_ms(2);
}

void gotoLcd(unsigned char pos) {
    LCD_RS = 0;
    writeLcd(pos);
}

/*void putchLcd(char c) {
    LCD_RS = 1;
    writeLcd(c);
}*/

void writeCStringLcd(const char * s) {
    LCD_RS = 1;
    while (*s)
        writeLcd(*s++);
}

void writeStringLcd(unsigned char * s) {
    LCD_RS = 1;
    while (*s)
        writeLcd(*s++);
}

void writeValueLcd(float val) {
    LCD_RS = 1;    
    long x = val*100;        
    if(val<0.0) { x *= -1; writeLcd('-');}            
    if(x > 1000) {        
        if(x > 10000) writeLcd(((x%100000-x%10000)/10000)+48);
        writeLcd(((x%10000-x%1000)/1000)+48);        
    }    
    writeLcd(((x%1000-x%100)/100)+48);
    writeLcd('.');
    writeLcd(((x%100-x%10)/10)+48);
    writeLcd((x%10)+48);
}