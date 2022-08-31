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
    TRISBbits.TRISB0=1;// connect Push button to pin  PORT B0  pulldown to ground with 10K resister
    TRISBbits.TRISB1=0;// connect LED to pin  PORT B1
    while(1)
    { if ((RB0 ==1)&&(i==3))//if button is Pressed
    {while(RB0==1){RB1=1;
        i=1;}
        
    }
    if((RB0==1)&&(i==1))
        while(RB0==1){RB1=0;
            i=3;}
            
    }
    
     return;
}
