#include <stdio.h>

int main()
{
    int number, count = 0;
    printf("Find the Digits Of a Number\n");
    printf("Enter Number:");
    scanf("%d", &number);
    while (number != 0)
    {
        number = number / 10;
        count = count + 1;
    }
    printf("The number of digits are: %d", count);
    return 0;
}