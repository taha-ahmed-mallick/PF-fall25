#include <stdio.h>

int main()
{
    int num, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num < 0)
        num = -num;
    do
    {
        int extracted = num % 10;
        sum += extracted;
        num /= 10;
    } while (num != 0);
    printf("The sum of digits are: %d", sum);
    return 0;
}