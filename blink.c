#include <blink.h>

void rod()
{

}

void main()
{
  
   //Example blinking LED program
   while(TRUE)
   {
      output_low(LED);
      delay_ms(DELAY);
      output_high(LED);
      delay_ms(DELAY);
      rod();
   }

}
