/*
 * File:   main.c
 * Author: douglasdoporto@live.com
 *
 * Created on 3/4/2018 4:03:58 PM UTC
 * "Created in MPLAB Xpress"
 */

#include "pragmas.h"
#include "defines.h"
#include "lcd.h"
#include "triggers.h"
#include "adc.h"
#include "preset.h"

void main() {
    __delay_ms(1000);        
    __delay_ms(1000);
    __delay_ms(1000);            
    initConfigs();                            
    __delay_ms(1000);
    __delay_ms(1000);    
    clearLcd();
    gotoLcd(0x80);
    writeCStringLcd("Nr: ");
    writeValueLcd(0.92);                
    __delay_ms(1000);        
    __delay_ms(1000);        
    
    while(1) {        
        gotoLcd(0x80);
        writeCStringLcd("Teste Conv. ADC ");                
        
        float valor;
        unsigned char str[7];
        unsigned char val[2];
        
        valor = ((float) (adc_read(0))*5) / 1023;                
        gotoLcd(0xC0);
        writeStringLcd("Sinal Ir ");
        writeValueLcd(valor);
        writeStringLcd("V");
        __delay_ms(1000);
        
        valor = ((float) (adc_read(1))*5) / 1023;        
        gotoLcd(0xC0);
        writeStringLcd("Sinal Is ");
        writeValueLcd(valor);
        writeStringLcd("V");
        __delay_ms(1000);
        
        valor = ((float) (adc_read(2))*5) / 1023;        
        gotoLcd(0xC0);
        writeStringLcd("Sinal It ");
        writeValueLcd(valor);
        writeStringLcd("V");        
        __delay_ms(1000);   
        
        valor = ((float) (adc_read(3))*5) / 1023;        
        gotoLcd(0xC0);
        writeStringLcd("Sinal Vr ");
        writeValueLcd(valor);
        writeStringLcd("V");        
        __delay_ms(1000);
        
        valor = ((float) (adc_read(4))*5) / 1023;
        gotoLcd(0xC0);
        writeStringLcd("Sinal Vs ");
        writeValueLcd(valor);
        writeStringLcd("V");                
        __delay_ms(1000);
        
        valor = ((float) (adc_read(5))*5) / 1023;
        gotoLcd(0xC0);
        writeStringLcd("Sinal Vt ");
        writeValueLcd(valor);
        writeStringLcd("V");                
        __delay_ms(1000);
                        
    }      
}  
