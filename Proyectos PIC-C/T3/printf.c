#include <16f877a.h>
#use delay (clock = 4M)
#use RS232 (baud = 9600, bits = 8, parity = N, xmit = pin_c0, rcv = pin_c2)

void main () {

   printf (" Hola mundo \r");
   delay_ms(2000);
   printf ("Este es mi primer programa desde la virtual terminal XD");

}


