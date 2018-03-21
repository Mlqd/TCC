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
    
    long Vr = 0, Vs = 0, Vt = 0, Ir = 0, Is = 0, It = 0;
    Vr += (adc_read(0)*5*100) / 1023;
    Vs += (adc_read(1)*5*100) / 1023;
    Vt += (adc_read(2)*5*100) / 1023;
    Ir += (adc_read(3)*5*100) / 1023;
    Is += (adc_read(4)*5*100) / 1023;
    It += (adc_read(5)*5*100) / 1023;
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