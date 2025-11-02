#include <stdio.h>

int main() {
    int n1 = 5, n2 = 13;
    printf("Addition of %d and %d is %d\n", n1, n2, n1+n2);
    printf("Subtraction of %d and %d is %d\n", n1, n2, n1-n2);
    printf("Multiplication of %d and %d is %d\n", n1, n2, n1*n2);
    printf("Division of %d and %d is %f\n", n1, n2, (float)n1/n2);
    return 0;
}