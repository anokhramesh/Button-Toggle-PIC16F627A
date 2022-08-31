/*
 * File:   ButtonInterfacing.c
 * Author:Anokhramesh
 *
 * Created on August 31, 2022, 7:28 AM
 */
#include <xc.h>
__CONFIG(FOSC_INTOSCIO & WDTE_OFF & PWRTE_ON & MCLRE_ON & BOREN_ON & LVP_OFF & CPD_OFF & CP_OFF);//PIC configuration Bit setting
#define _XTAL_FREQ 4000000// defined crystal frequency
int i=3;


void main(void) {
    TRISBbits.TRISB0=1;
    TRISBbits.TRISB1=0;
    while(1)
    { if ((RB0 ==1)&&(i==3))
    {while(RB0==1){RB1=1;
        i=1;}
        
    }
    if((RB0==1)&&(i==1))
        while(RB0==1){RB1=0;
            i=3;}
            
    }
    
     return;
}
