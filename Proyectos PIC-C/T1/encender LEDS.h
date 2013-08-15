#include <16F877A.h>
#device adc=8
#FUSES NOWDT, LP, NOPUT, NOPROTECT, NODEBUG, NOBROWNOUT, NOLVP, NOCPD, WRT_50%
#use delay(clock=4000000)
#use rs232(baud=9600,parity=N,xmit=PIN_C6,rcv=PIN_C7,bits=8)

