#include <stdio.h>

int main()
{
    for (int i = 1; i < 4; i++)
    {
        for (int j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }
    for (int i = 1; i < 6; i++)
    {
        for (int j = 1; j < 6 - i; j++)
            printf(" ");
        for (int j = 1; j <= i; j++)
            printf("*");
        printf("\n");
    }
    char ch = 'A';
    for (int i = 1; i < 6; i++)
    {
        for (char j = 1; j <= i; j++)
            printf("%c", ch);
        printf("\n");
        ch++;
    }
    return 0;
}