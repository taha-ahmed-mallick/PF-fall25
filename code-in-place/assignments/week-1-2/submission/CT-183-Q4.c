#include <stdio.h>

int main()
{
    float wght;
    printf("Enter patient\'s weight: ");
    scanf("%f", &wght);
    printf("The dosage(mg) for the patient is %f", wght * 0.8);
    return 0;
}