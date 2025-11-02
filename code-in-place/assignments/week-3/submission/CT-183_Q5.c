#include <stdio.h>

int main()
{
    // inputs temperature in celcius
    float c, f;
    printf("Enter temperature in Celcius: ");
    scanf("%f", &c);
    // converts it
    f = c * 9 / 5 + 32;
    // display it
    printf("%.2fC = %.2fF\n", c, f);
    // provides recomendation
    if (c >= 30)
    {
        printf("It's hot! Stay hydrated and wear light clothes.");
    }
    else if (c >= 20)
    {
        printf("Nice weather! Perfect for outdoor activities.");
    }
    else if (c >= 10)
    {
        printf("Cool weather. Wear a light jacket.");
    }
    else if (c >= 0)
    {
        printf("Cold! Wear warm clothes.");
    }
    else
        printf("Freezing! Stay indoors and bundle up.");
    return 0;
}