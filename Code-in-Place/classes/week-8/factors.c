#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            printf("(%d, %d) ", i, n / i);
    }
    printf("\n\n");
    int i = 1;
    while (i <= 20)
    {
        if (i % 2 != 0)
            printf("%d is a odd number.\n", i);
        i++;
    }
    return 0;
}