#include <blink.h>





void funcao_qq_coisa()
{

}

void main()
{
  
   //Example blinking LED program
   while(true)
   {
      output_low(LED);
      delay_ms(DELAY);
      output_high(LED);
      delay_ms(DELAY);
      funcao_qq_coisa();
   }

}
