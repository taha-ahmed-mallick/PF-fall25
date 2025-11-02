#include <stdio.h>
int main()
{
    int y = 5;
    int *yPtr;
    yPtr = &y;
    printf("Value of y is %d and its address is %p", y, yPtr);
}