#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int lower = 2, upper = 7;
    int num1 = (rand() % (upper - lower + 1)) + lower;
    int num2 = (rand() % (upper - lower + 1)) + lower;
    printf("%d %d", num1, num2);
    return 0;
}