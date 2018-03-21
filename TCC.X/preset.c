/*
 * File:   preset.c
 * Author: douglasdoporto@live.com
 *
 * Created on 3/11/2018 3:20:21 AM UTC
 * "Created in MPLAB Xpress"
 */

#include "preset.h"
#include "lcd.h"
#include "timer.h"

void initConfigs() {        
    UCON<3>=0;        
    CMCON = 0b00000111;        
    TRISC = 0b11111000;
    TRISD = 0b00000001;
    TRISE = 0b1111;
//===== Configuração inicial do Conversor ADC ==================================
    TRISA = 0b10111111;
    ADCON1 = 0b00001001;
    ADCON2 = 0b10000110;
//===== Configuração inicial do Display LCD ====================================
    TRISB = 0b11000000;
    LCD_EN = 0;
    LCD_RS = 0;
    __delay_ms(50);
    writeLcd(0x02);
    __delay_ms(5);
    writeLcd(0x28);        
    writeLcd(0x01);    
    writeLcd(0x0c);    
    writeLcd(0x06);
    clearLcd();        
    writeLcd(0x0C);
//===== Configuração inicial do Timer ==========================================
    T0CON = 0b00000111;
    INTCON = 0b11100000;
    
// para mais tarde
// liga timer: 
// TMR0L = 0xD2;
// TMR0H = 0x39;
// T0CON = T0CON | 0b10000000;
// desliga timer:
// TMR0L = 0;
// TMR0H = 0;
// T0CON = T0CON & 0b01111111;    
    
//===== Configuração inicial dos Triggers ======================================    
    LATD = LATD & 0b00000001;
    LATC = LATC & 0b11111000;
    
}

void interrupt high_priority_interrupt(void) {
    if (INTCONbits.TMR0IF)
        tmr0_flag();    
}