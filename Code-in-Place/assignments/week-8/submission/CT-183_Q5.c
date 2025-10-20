#include <stdio.h>

int main()
{
    int i = 1;
    while (i <= 5)
    {
        printf("\nTable of %d\n", i);
        printf("==========\n");
        int j = 1;
        while (j <= 10)
        {
            printf("%d x %d  = %d\n", i, j, i * j);
            j++;
        }
        i++;
    }
    return 0;
}