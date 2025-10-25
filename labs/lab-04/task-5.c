#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Enter the Value of 1st Number:");
    scanf("%d", &num1);
    printf("Enter the Value of 2nd Number:");
    scanf("%d", &num2);
    if (num1 != num2)
    {
        printf("First Number is not equal to Second Number\n");
        if (num1 > num2)
            printf("First Number is greater then to Second Number\n");
        else
            printf("Second Number is greater then to First Number\n");
    }
    else
        printf("First Number is equal to Second Number\n");

    return 0;
}