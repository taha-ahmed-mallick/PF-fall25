#include <stdio.h>

int main()
{
    printf("Even or Odd Finder\n");
    int num;
    printf("Enter Number: ");
    scanf("%d", &num);

    (num % 2 == 0) ? printf("Number is Even") : printf("Number is Odd");
    return 0;
}