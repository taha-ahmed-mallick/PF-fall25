#include <stdio.h>
int main()
{
    int i = 4;
    float sum = 1.00;

    while (i <= 400)
    {
        if (i % 4 == 0)
        {
            sum += 1.0 / i;
        }
        i++;
    }
    printf("The sum of series 1 + 1/4 + 1/8 + ... + 1/400 is %.3f", sum);
    return 0;
}