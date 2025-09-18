#include <stdio.h>

int main()
{
    // inputs temperature
    float temp;
    printf("Enter temperature in Celcius: ");
    scanf("%f", &temp);
    // checks condition
    if (temp > 30)
        printf("Weather is hot.\n");
    return 0;
}