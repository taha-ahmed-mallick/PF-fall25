#include <stdio.h>

int main()
{
    int num1, num2,result;
    char operator;
    printf("Enter your 1st number: ");
    scanf("%d", &num1);
    printf("Enter your 2nd number: ");
    scanf("%d", &num2);
    printf("Enter the operation to be performed (+,-,*,/,%%): ");
    scanf(" %c", &operator);
    if ((operator == '/' || operator == '%') && num2 == 0) {
        printf("This operation can't be peformed.");
        return 0;
    }
    switch (operator)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
    case '/':
        result = num1 / num2;
        break;
    case '%':
        result = num1 % num2;
        break;
    default:
        printf("Invalid Operator!");
        return 0;
    }
    printf("The result of your provided operation is: %d", result);
    return 0;
}