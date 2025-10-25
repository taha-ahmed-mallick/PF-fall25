#include <stdio.h>

int main()
{
    printf("Find Maximum of Two Numbers\n");
    int num1, num2;
    printf("Enter the First Number: ");
    scanf("%d", &num1);

    printf("Enter the Second Number: ");
    scanf("%d", &num2);

    (num1 > num2) ? printf("%d is Bigger.", num1) : (num2 > num1) ? printf("%d is Bigger.", num2)
                                                                  : printf("Both are equal.");
    return 0;
}