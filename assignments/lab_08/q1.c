#include <stdio.h>

int main()
{
    int num, fac = 1;
    printf("Enter an integer: ");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("Factorial can\'t be calculated.");
        return 0;
    }
    for (int i = 1; i <= num; i++)
        fac *= i;
    printf("The factorial of %d! is %d.", num, fac);
    return 0;
}