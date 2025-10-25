#include <stdio.h>

int main()
{
    int num1, num2, choice;

    printf("=== Welcome to the Simple Calculator ===\n\n");

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("\nChoose an operation to perform:\n");
    printf(" 1 -> Addition\n");
    printf(" 2 -> Subtraction\n");
    printf(" 3 -> Multiplication\n");
    printf(" 4 -> Division\n");
    printf("\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("Addition = %d\n", num1 + num2);
        break;
    case 2:
        printf("Subtraction = %d\n", num1 - num2);
        break;
    case 3:
        printf("Multiplication = %d\n", num1 * num2);
        break;
    case 4:
        if (num2 != 0)
            printf("Division = %.2f\n", (float)num1 / num2);
        else
            printf("Error: Division by zero!\n");
        break;
    default:
        printf("Enter valid choice\n");
    }

    return 0;
}
