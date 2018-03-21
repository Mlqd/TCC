/*
 * File:   adc.c
 * Author: douglasdoporto@live.com
 *
 * Created on 3/11/2018 4:12:44 PM UTC
 * "Created in MPLAB Xpress"
 */
 
#include "adc.h"

unsigned int adc_read(char canal) {
    unsigned char x, y;
    ADCON0 = (unsigned char)((canal << 2) | 0x01);
    ADCON0bits.GO_DONE = 1;
    while (ADCON0bits.GO_DONE);
    x = (unsigned char)(ADRESH & 0x03);
    y = ADRESL;
    return (unsigned int) (x << 8 | y);
}