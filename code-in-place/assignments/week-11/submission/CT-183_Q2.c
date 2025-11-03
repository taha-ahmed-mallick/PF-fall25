#include <stdio.h>

int cube(int x)
{
    return x * x * x;
}

int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    printf("The cube of %d is %d\n", x, cube(x));
    return 0;
}