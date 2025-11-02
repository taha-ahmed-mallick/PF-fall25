#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
        for (int j = 1; j <= num; j++)
            if ((i + j) % 2 == 0)
                printf("(%d, %d) ", i, j);
    return 0;
}