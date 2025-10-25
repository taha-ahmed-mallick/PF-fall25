#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Maximum of Three Numbers!\n");
    printf("Enter 1st Number: ");
    scanf("%d", &num1);
    printf("Enter 2nd Number: ");
    scanf("%d", &num2);
    printf("Enter 3rd Number: ");
    scanf("%d", &num3);

    if (num1 == num2 && num2 == num3)
        printf("All Numbers are Equal");
    else if (num1 > num2 && num1 > num3)
        printf("%d is Largest", num1);
    else if (num2 > num1 && num2 > num3)
        printf("%d is Largest", num2);
    else
        printf("%d is Largest", num3);
    return 0;
}