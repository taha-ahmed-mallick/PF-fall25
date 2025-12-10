#include <stdio.h>

int main()
{
    int x = 5, y = 10, z = 15, t = 2;
    printf("Q1 (a)(i):\t%d\n", (++x >= (y * 2)) || ((y % 2) && (z++ % 2)));
    x = 5, y = 10, z = 15, t = 2;
    printf("Q1 (a)(ii):\t%d\n", (x > y && y < z) || (t *= x));
    x = 5, y = 10, z = 15, t = 2;
    printf("Q1 (a)(iii):\t%d\n", x > y ? x + y : x - y);
    x = 5, y = 10, z = 15, t = 2;
    printf("Q1 (a)(iv):\t%d\n", x++ + ++y * y / t);
    x = 5, y = 10, z = 15, t = 2;
    printf("%d", ++x == x+1);
    printf(" \n%d\n", x);
    return 0;
}