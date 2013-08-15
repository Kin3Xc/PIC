#include <16f877a.h>
#use delay (clock = 4M)

void main () {

   while (true) {
      if (input (pin_b0)){
      
      output_high(pin_c0);
      output_high(pin_c1);
      output_high(pin_c2);
      output_high(pin_c3);
      output_high(pin_c4);
      output_high(pin_c5);
      output_high(pin_c6);
      output_high(pin_c7);
      
      }
      
      if (!input (pin_b0)){
      output_low(pin_c0);
      output_low(pin_c1);
      output_low(pin_c2);
      output_low(pin_c3);
      output_low(pin_c4);
      output_low(pin_c5);
      output_low(pin_c6);
      output_low(pin_c7);
      }
      
   }
}
