/*
 * File:   triggers.c
 * Author: douglasdoporto@live.com
 *
 * Created on 3/11/2018 3:49:39 AM UTC
 * "Created in MPLAB Xpress"
 */

#include "triggers.h"

void setTrigger(char trigger_id, char action) {
    switch(trigger_id) {
        case 0: TRIGGER_0 = action; break;
        case 1: TRIGGER_1 = action; break;
        case 2: TRIGGER_2 = action; break;
        case 3: TRIGGER_3 = action; break;
        case 4: TRIGGER_4 = action; break;
        case 5: TRIGGER_5 = action; break;
        case 6: TRIGGER_6 = action; break;
        case 7: TRIGGER_7 = action; break;
        case 8: TRIGGER_8 = action; break;
        case 9: TRIGGER_9 = action; break;
    }
}