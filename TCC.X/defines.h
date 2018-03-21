/* 
 * File:   defines.h
 * Author: douglasdoporto@live.com
 *
 * Created on 3/11/2018 4:24:59 PM UTC
 * "Created in MPLAB Xpress"
 */

#ifndef DEFINES_H
#define	DEFINES_H

#include <xc.h>

#define TRIGGER_0 LATDbits.LD7
#define TRIGGER_1 LATDbits.LD6
#define TRIGGER_2 LATDbits.LD4
#define TRIGGER_3 LATDbits.LD5
#define TRIGGER_4 LATDbits.LD3
#define TRIGGER_5 LATDbits.LD2
#define TRIGGER_6 LATCbits.LC0
#define TRIGGER_7 LATCbits.LC1
#define TRIGGER_8 LATCbits.LC2
#define TRIGGER_9 LATDbits.LD1

#define LCD_RS      LATBbits.LATB4
#define LCD_EN      LATBbits.LATB5
#define LCD_BIT0    LATBbits.LATB0
#define LCD_BIT1    LATBbits.LATB1
#define LCD_BIT2    LATBbits.LATB2
#define LCD_BIT3    LATBbits.LATB3
#define LCD_BITS    LATB

#define _XTAL_FREQ (16000000)

#endif	/* DEFINES_H */
