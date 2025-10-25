#include <stdio.h>
int main()
{
    int tax_rate, sal;
    float tax, rem_sal;
    printf("Enter Salary: ");
    scanf("%d", &sal);
    printf("Enter Tax Rate: ");
    scanf("%d", &tax_rate);
    tax = sal * (tax_rate / 100.0);
    rem_sal = sal - tax;
    printf("Before tax salary: %d\n", sal);
    printf("Tax: %.2f\n", tax);
    printf("After tax salary: %.2f\n", rem_sal);
    return 0;
}