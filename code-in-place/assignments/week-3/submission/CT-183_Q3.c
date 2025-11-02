#include <stdio.h>

int main()
{
    // inputs a number
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    // Checks wether even or odd.
    if (num % 2 == 0)
    {
        printf("Even Number.\n");
    }
    else
        printf("Odd Number.\n");
    return 0;
}