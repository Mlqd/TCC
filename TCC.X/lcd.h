/* 
 * File:   lcd.h
 * Author: douglasdoporto@live.com
 *
 * Created on 3/11/2018 5:10:37 PM UTC
 * "Created in MPLAB Xpress"
 */

#ifndef LCD_H
#define	LCD_H		

#include "defines.h"

void writeLcd(char c);
void clearLcd(void);
void gotoLcd(unsigned char pos);
//void putchLcd(char c);
void writeCStringLcd(const char * s);
void writeStringLcd(char * s);
void sendLcd(void);
void writeValueLcd(float val);

#endif	/* LCD_H */
