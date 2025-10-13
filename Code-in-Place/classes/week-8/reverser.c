#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, reversed = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    int digit = n ? log10(abs(n)) + 1 : 1;
    printf("Digits: %d\n", digit);
    for (int i = 1; i <= digit; i++)
    {
        int extracted = n % 10;
        reversed = reversed * 10 + extracted;
        n /= 10;
    }
    printf("Reversed: %d", reversed);
    return 0;
}