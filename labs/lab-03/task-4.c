#include <stdio.h>

int main()
{
    int num1, num2;

    printf("\tBinary Bitwise Operators\n");
    printf("\t========================\n");

    printf("Enter 1st number: ");
    scanf("%d", &num1);

    printf("Enter 2nd number: ");
    scanf("%d", &num2);

    printf("AND OPERATION: %d\n", num1 & num2);
    printf("OR OPERATION: %d\n", num1 | num2);
    printf("NOT OPERATION (1st number): %d\n", ~num1);
    printf("NOT OPERATION (2nd number): %d\n", ~num2);
    printf("XOR OPERATION: %d\n", num1 ^ num2);
    printf("LEFT SHIFT (num1<<1): %d\n", num1 << 1);
    printf("RIGHT SHIFT (num2>>1): %d\n", num2 >> 1);

    return 0;
}
