#include <stdio.h>

int main()
{
    float power;
    printf("Enter power in watts: ");
    scanf("%f", &power);
    printf("The power in killowatts is: %f", power / 1000);
    return 0;
}