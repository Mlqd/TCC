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
        /*gotoLcd(0x80);
        writeCStringLcd("Testando gatilhos...");
        gotoLcd(0xC0);
        writeCStringLcd("Banco 1         ");
        setTrigger(0,1);
        __delay_ms(1000);        
        gotoLcd(0xC0);
        writeCStringLcd("Banco 2         ");
        setTrigger(0,0);
        setTrigger(1,1);
        __delay_ms(1000);
        gotoLcd(0xC0);        
        writeCStringLcd("Banco 3         ");
        setTrigger(1,0);
        setTrigger(2,1);
        __delay_ms(1000);
        gotoLcd(0xC0);
        writeCStringLcd("Banco 4         ");
        setTrigger(2,0);
        setTrigger(3,1);
        __delay_ms(1000);
        gotoLcd(0xC0);
        writeCStringLcd("Banco 5         ");
        setTrigger(3,0);
        setTrigger(4,1);
        __delay_ms(1000);
        gotoLcd(0xC0);
        writeCStringLcd("Banco 6         ");
        setTrigger(4,0);
        setTrigger(5,1);
        __delay_ms(1000);
        gotoLcd(0xC0);
        writeCStringLcd("Banco 7         ");
        setTrigger(5,0);
        setTrigger(6,1);
        __delay_ms(1000);
        gotoLcd(0xC0);
        writeCStringLcd("Banco 8         ");
        setTrigger(6,0);
        setTrigger(7,1);                
        __delay_ms(1000);
        gotoLcd(0xC0);
        writeCStringLcd("Banco 9         ");
        setTrigger(7,0);
        setTrigger(8,1);        
        __delay_ms(1000);
        gotoLcd(0xC0);
        writeCStringLcd("Banco 10         ");
        setTrigger(8,0);
        setTrigger(9,1);
        __delay_ms(500);
        setTrigger(9,0);        
        __delay_ms(1000);
        for(int i=0;i<10;i++) setTrigger(i,1);*/
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
