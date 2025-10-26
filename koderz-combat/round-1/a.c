#include <stdio.h>
// LINK: https://vjudge.net/contest/755028#problem/A
int main()
{
    int t;
    scanf("%d", &t);
    int a[t], b[t];
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &a[i], &b[i]);
    }
    for (int i = 0; i < t; i++)
    {
        printf("%d\n", b[i] - a[i]);
    }
    return 0;
}