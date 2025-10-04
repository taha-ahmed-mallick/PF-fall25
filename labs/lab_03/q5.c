#include <stdio.h>
int main()
{
    float principal, rate, time, simpleInterest;

    printf("Simple Interest Calculator!!!");
    printf("\nRestrictions:\nThe input value of the Principle must be between 100 Rs to 1,000,000 Rs.\nThe Rate of interest must be between 5 to 10 percent\nThe Time period must be between 1 to 10 years.\n");

    printf("Enter Principal amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of interest (in %%): ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);

    simpleInterest = (principal * rate * time) / 100;

    printf("Simple Interest = %.2f\n", simpleInterest);
    return 0;
}