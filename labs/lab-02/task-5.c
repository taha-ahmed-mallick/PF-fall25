#include <stdio.h>

int main()
{
    printf("Find Whether the Given Number is Positive, Negative or Zero(Neutral)\n");
    int num;
    printf("Enter the Number: ");
    scanf("%d", &num);

    if (num > 0)
        printf("Number is Positive");
    else if (num < 0)
        printf("Number is Negative");
    else
        printf("Number is Zero(Neutral)");
    return 0;
}