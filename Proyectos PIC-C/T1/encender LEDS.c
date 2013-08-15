//ENCEDER LEDs
//PROGRAMADOR: ELKIN URANGO
//FECHA: 06/08/13
//DATAFACTORY CyS

#include "C:\Users\Administrador\Desktop\Proyectos PIC-C\encender LEDS.h"


void main()
{
   setup_adc_ports(NO_ANALOGS);
   setup_adc(ADC_OFF);
   setup_psp(PSP_DISABLED);
   setup_spi(SPI_SS_DISABLED);
   setup_timer_0(RTCC_INTERNAL|RTCC_DIV_1);
   setup_timer_1(T1_DISABLED);
   setup_timer_2(T2_DISABLED,0,1);
   setup_comparator(NC_NC_NC_NC);
   setup_vref(FALSE);

   // TODO: USER CODE!!
   WHILE (TRUE){
      //Prendo el led que esta conectado a los siguientes pines
      output_high(pin_b0);
      delay_ms(500);
      output_high(pin_b1);
      delay_ms(500);
      output_high(pin_b2);
      delay_ms(500);
      output_high(pin_b3);
      delay_ms(500);
      output_high(pin_b4);
      delay_ms(500);
      output_high(pin_b5);
      delay_ms(500);
      output_high(pin_b6);
      delay_ms(500);
      output_high(pin_b7);
      //Pongo un retardo para entonces proceder a apagar los leds
      delay_ms(500);
      //Ahora mando a apagar los leds
      output_low(pin_b7);
      delay_ms(500);
      output_low(pin_b6);
      delay_ms(500);
      output_low(pin_b5);
      delay_ms(500);
      output_low(pin_b4);
      delay_ms(500);
      output_low(pin_b3);
      delay_ms(500);
      output_low(pin_b2);
      delay_ms(500);
      output_low(pin_b1);
      delay_ms(500);
      output_low(pin_b0);
      
      delay_ms(500);
   }
}

