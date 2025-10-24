#include <stdio.h>
#include <math.h>

int main()
{
    printf("Quadratic Equation Solver\n");
    printf("=========================\n");
    float a, b, c;
    printf("Enter the values of a, b & c as per standard formula.\n");
    printf("\t\tax^2 + bx + c = 0\n");
    printf("Enter the value of a: ");
    scanf("%f", &a);
    printf("Enter the value of b: ");
    scanf("%f", &b);
    printf("Enter the value of c: ");
    scanf("%f", &c);
    float d = pow(b, 2) - 4 * a * c;
    printf("The value of d is: %f\n", d);
    if (d > 0)
    {
        float x1 = (-b + sqrt(d)) / (2 * a);
        float x2 = (-b - sqrt(d)) / (2 * a);
        printf("The roots of the given quadratic equation are: \n");
        printf("\tx1: %.2f\n", x1);
        printf("\tx2: %.2f\n", x2);
    }
    else if (d == 0)
    {
        float x = -b / (2 * a);
        printf("This quadratic equation has only one root:  \n");
        printf("\tx: %.2f", x);
    }
    else
    {
        float xr = -b / (2 * a);
        float xi = sqrt(-d) / (2 * a);
        printf("This quadratic equation has complex roots: \n");
        printf("\tx1: %.2f%+.2fi\n", xr, xi);
        printf("\tx2: %.2f%+.2fi", xr, -xi);
    }
    return 0;
}