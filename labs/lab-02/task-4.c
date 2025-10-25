#include <stdio.h>

int main()
{
    printf("Find Whether the Given Number is Even or Odd\n");
    int num;
    printf("Enter Number: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("Number is Even");
    else
        printf("Number is Odd");
    return 0;
}