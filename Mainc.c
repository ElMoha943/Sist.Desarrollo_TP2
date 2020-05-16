//CONFIGURATION BITS
#pragma config FOSC = INTRC_NOCLKOUT
#pragma config WDTE = OFF
#pragma config PWRTE = OFF
#pragma config MCLRE = OFF
#pragma config CP = OFF
#pragma config CPD = OFF
#pragma config BOREN = OFF
#pragma config IESO = ON
#pragma config FCMEN = ON
#pragma config LVP = OFF
#pragma config BOR4V = BOR40V
#pragma config WRT = OFF 
//LIBRERIAS
#include <xc.h>
#include <pic16f886.h>
//DEFINES
#define p1 PORTAbits.RA1
#define p2 PORTAbits.RA2
//COMIENZO DEL PROGRAMA
void main(void) {
    unsigned char cosa, rebote;
    //CONFIGURACION DE PUERTOS
    ANSEL=0;
    ANSELH=0;
    TRISB=0;
    //CONFIGURACION DE UWART
    TRISCbits.TRISC6=0;
    BRG16=0;
    BRGH=1;
    SPBRG=25;
    TXSTAbits.TXEN=1;
    RCSTAbits.CREN=1;
    RCSTAbits.SPEN=1;
     while(1)
    {
        //SI RECIBE INFORMACION
        if(RCIF)
        {
            cosa=RCREG;
            switch(cosa)
            {
                case '0':
                    PORTB = 0b11111100;
                    break;
                case '1':
                    PORTB = 0b01100000;
                    break;
                case '2':
                    PORTB = 0b11011010;
                    break;
                case '3':
                    PORTB = 0b11110010;
                    break;
                case '4':
                    PORTB = 0b01100110;
                    break;
                case '5':
                    PORTB = 0b10110110;
                    break;
                case '6':
                    PORTB = 0b10111110;
                    break;
                case '7':
                    PORTB = 0b11100000;
                    break;
                case '8':
                    PORTB = 0b11111110;
                    break;
                case '9':
                    PORTB = 0b11110110;
                    break;
            }
        }
        if(p1==1 && rebote==0)
        {
            rebote=1;
            TXREG='A';
            RB0=1;
        }
        else if(p2==1 && rebote==0)
        {
            rebote=1;
            TXREG='B';
            RB0=0;
        }
        else if(p1==0 && p2==0)
        {
            rebote=0;
        }
    }
}