#include <stdio.h>

int sumNatural(int);

int main()
{
    printf("Sum to 5 natural numbers: %d\n", sumNatural(5));
    return 0;
}

int sumNatural(int n)
{
    if (n == 1)
        return 1;
    else
        return n + sumNatural(n - 1);
}