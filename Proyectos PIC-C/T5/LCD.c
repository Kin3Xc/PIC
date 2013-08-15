#include <16f877a.h>
#use Delay (Clock = 4M)
#include <LCD.c>


Void main () {
   while (true){
      lcd_init ();
      printf (lcd_putc,"Indicador de nivel");
      output_low(pin_b3);
      
      if (input (pin_b0)){
         lcd_init ();
         printf (lcd_putc,"Tanque Vacio");
         delay_ms(1000);
         
         }
         
      if (input (pin_b1)){
         lcd_init();
         printf (lcd_putc,"Tanque Medio");
         delay_ms(1000);
      }
      
      if (input(pin_b2)){
         lcd_init();
         printf(lcd_putc,"Tanque Lleno");
         
         output_high (pin_b3);
         delay_ms (100);
         output_low (pin_b3);
         delay_ms (100);
         output_high (pin_b3);
         delay_ms (1000);
      }
   }
}
