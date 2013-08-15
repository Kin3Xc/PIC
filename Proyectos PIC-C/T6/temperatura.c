#include <16f877a.h>
#device *=16
#device adc=10
#use delay (Clock = 4M)
#include <lcd.c>

float temperatura;

void main () {
   setup_adc_ports(RA0_ANALOG);   //Entrada del LM35
   setup_adc(ADC_CLOCK_INTERNAL);
   setup_COUNTERS(RTCC_internal,rtcc_div_1); //Marca de division
   set_adc_channel(0);
   
   lcd_init();
   lcd_gotoxy(5,1);
   printf(lcd_putc,"Temperatura");
   delay_ms(350);
   lcd_init();
   
   while(true){
      temperatura = (float)read_adc()/2;
      //Grados sentigrados
      lcd_gotoxy(5,1);
      printf(lcd_putc,"%f",temperatura);
      lcd_gotoxy(14,1);
      printf(lcd_putc,"Grados");
      delay_ms(200);
      
      //Si la temperatura es myor que 35
      if(temperatura<=500&&temperatura>=35){
         output_high(pin_a1);
          output_high(pin_a2);
           output_low(pin_a3);
           
           lcd_gotoxy(5,2);
           printf(lcd_putc,"Disipando calor");
           delay_ms(200);
           
        }
        
        //Si la temperatura es correcta o menor que 35
        else
        {
         output_low(pin_a1);
          output_low(pin_a2);
           output_high(pin_a3);
           
            lcd_gotoxy(5,2);
           printf(lcd_putc,"Correcta Función");
           delay_ms(200);
        }
   }

}
