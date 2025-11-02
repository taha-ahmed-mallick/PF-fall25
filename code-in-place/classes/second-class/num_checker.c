#include <stdio.h>

int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    if (num == 0)
    {
        printf("It is neutral.\n");
    }
    else if (num > 0)
    {
        printf("Positive.\n");
    }
    else
    {
        printf("Negative.\n");
    }
    return 0;
}