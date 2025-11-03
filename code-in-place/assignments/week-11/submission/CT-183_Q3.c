#include <stdio.h>

void swap(int *a, int *b)
{
    *a += *b;
    *b = *a - *b;
    *a -= *b;
}

int main()
{
    int x, y;
    printf("Enter two integers:\n");
    scanf("%d", &x);
    scanf("%d", &y);
    printf("Before swapping:");
    printf("\nx = %d\ny = %d\n", x, y);
    printf("After swapping:\n");
    swap(&x, &y);
    printf("x = %d\ny = %d\n", x, y);
    return 0;
}