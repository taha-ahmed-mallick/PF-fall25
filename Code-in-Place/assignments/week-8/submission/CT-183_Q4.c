#include <stdio.h>

int main()
{
    int num, reversed = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num != 0)
    {
        int extracted = num % 10;
        reversed = reversed * 10 + extracted;
        num /= 10;
    }
    printf("Reversed: %d", reversed);
    return 0;
}