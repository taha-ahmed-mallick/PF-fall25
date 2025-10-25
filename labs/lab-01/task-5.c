#include <stdio.h>

int main()
{
    int num1, num2, add, sub, mul, modu;
    float div;

    printf("\tCALCULATOR\n");
    printf("\t==========\n");

    printf("Enter 1st number: ");
    scanf("%d", &num1);

    printf("Enter 2nd number: ");
    scanf("%d", &num2);

    add = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;
    div = (float) num1 / num2;
    modu = num1 % num2;

    printf("\tRESULTS\n");
    printf("\t=======\n");
    printf("Addition (%d + %d) = %d\n",num1, num2, add);
    printf("Subtraction (%d - %d) = %d\n",num1, num2, sub);
    printf("Multiplication (%d * %d) = %d\n",num1, num2, mul);
    printf("Division (%d / %d) = %.2f\n",num1, num2, div);
    printf("Modulus (%d %% %d) = %d\n",num1, num2, modu);

    return 0;
}