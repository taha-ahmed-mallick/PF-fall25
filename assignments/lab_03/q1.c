#include <stdio.h>

int main()
{
    int num1, num2, temp;
    printf("Enter the value of Num1: ");
    scanf("%d", &num1);
    printf("Enter the value of Num2: ");
    scanf("%d", &num2);

    printf("Before Swaping\n Num1 = %d Num2 = %d\n", num1, num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("After Swaping\n Num1 = %d Num2 = %d", num1, num2);
    return 0;
}