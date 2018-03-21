/* 
 * File:   timer.h
 * Author: Thor
 *
 * Created on 20 de Março de 2018, 23:28
 */

#include "timer.h"
#include "adc.h"

void tmr0_flag(void) {
    INTCONbits.TMR0IF = 0;
    TMR0L = 0xD2;
    TMR0H = 0x39;
    
    int Vr[30], Vs[30], Vt[30], Ir[30], Is[30], It[30];
    for(int i=0;i<30;i++) {
        Vr[i] = adc_read(0);//(adc_read(0)*5*100) / 1023;
        Vs[i] = adc_read(1);//(adc_read(1)*5*100) / 1023;
        Vt[i] = adc_read(2);//(adc_read(2)*5*100) / 1023;
        Ir[i] = adc_read(3);//(adc_read(3)*5*100) / 1023;
        Is[i] = adc_read(4);//(adc_read(4)*5*100) / 1023;
        It[i] = adc_read(5);//(adc_read(5)*5*100) / 1023;
    }
    //char i1[100], i2[100], i3[100], v1[100],v2[100],v3[100]; 
    //função
}

void setTimer(char state) {
    if(state == 0) {        
        T0CON = T0CON & 0b01111111; 
        TMR0L = 0;
        TMR0H = 0;
    } else {
        TMR0L = 0xD2;
        TMR0H = 0x39;
        T0CON = T0CON | 0b10000000;
    }
}