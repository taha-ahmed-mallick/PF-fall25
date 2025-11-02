#include <stdio.h>

int main()
{
  // inputs temperature
  float temp;
  printf("Enter temperature in Celcius: ");
  scanf("%f", &temp);
  // converts to fahrenheit
  float f = temp * 9.0 / 5 + 32;
  // prints the result
  printf("The temperature in Fahrenheit is %f.\n", f);
  return 0;
}

/*
    Input   Output
    100C    212F
      0C     32F
    -40C    -40F
*/