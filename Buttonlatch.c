/*
 * File:   Buttonlatch.c
 * Author: AnokhRamesh
 *
 * Created on August 29, 2022, 12:42 PM
 */
#include <xc.h>
__CONFIG(FOSC_INTOSCIO & WDTE_OFF & PWRTE_ON & MCLRE_ON & BOREN_ON & LVP_OFF & CPD_OFF & CP_OFF);//PIC configuration Bit setting
#define _XTAL_FREQ 4000000// defined crystal frequency
#define LED1 RB0//define pin RB0 as LED1
#define LED2 RB3//define pin RB3 as LED2
#define BTN RA2// define PIn RA0 as SW1
void main(void) {
    TRISA2 =0xff;// SET PORTA pin RA2 AS AN input
    TRISB =0x00;// SET all Pins in PORTB AS AN OUTPUT
    LED1=0;//PORTBbits.RB0=0x00;//set initial values of PortB RB0 as LOW
    //LED2=0x00;//uncomment this line if you want the LED2 Turn OFF at initial stage
    LED2=1;//PORTBbits.RB3=0xff;set initial value of PortB RB3 to High
    BTN=0;//PORTBbits.RA2=0x00;set initial value of PortB RA2 to  LOW
    while(1){
        if(BTN==1){// if button is Pressed
            LED1 = ~ LED1;// swap the current status of LED1
            LED2 = ~ LED2;// swap the current status of LED2
                         //PORTBbits.RB3= ~PORTBbits.RB3;
                         while(BTN==1);
        } 
    
}
    return;
}
