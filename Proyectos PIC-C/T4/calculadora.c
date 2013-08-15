#include <16f877a.h>
#include <stdlib.h>
#use delay (clock = 4M)
#use RS232 (baud = 9600, bits = 8, parity = N, xmit = pin_b0, rcv = pin_b2)


void main () {

   char caracter1 [6];
   char caracter2 [6];
   
   signed long X;
   signed long Y;
   
   signed long suma;
   signed long resta;
   signed long multiplicacion;
   signed long division;
   
   printf ("Señor usuario digite su primer Numero\r");
   gets (caracter1);
   X = atol (caracter1);
   printf ("El primer numero es: %Ld\r", X);
      
   printf ("Señor usuario digite su segundo Numero\r");
   gets (caracter2);
   Y = atol (caracter2);
   printf ("El segundo numero es: %Ld\r", Y);
   
   suma = X+Y;
   resta = X-Y;
   multiplicacion = X*y;
   division = X/Y;
   
   printf ("El resutado de la Suma es: %Ld\r", suma);
   printf ("El resutado de la Resta es: %Ld\r", resta);
   printf ("El resutado de la Multiplicacion es: %Ld\r", multiplicacion);
   printf ("El resutado de la Division es: %Ld\r", division);

}
