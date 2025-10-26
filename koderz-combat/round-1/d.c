#include <stdio.h>
// LINK: https://vjudge.net/contest/755028#problem/D
int main()
{
    int t, sum = 0, n3, n5, n15, s3, s5, s15;
    scanf("%d", &t);
    int n[t];
    for (int i = 0; i < t; i++)
    {
        scanf("%d", &n[i]);
    }
    for (int i = 0; i < t; i++)
    {
        n3 = (n[i] - 1) / 3;
        n5 = (n[i] - 1) / 5;
        n15 = (n[i] - 1) / 15;
        s3 = 3 * n3 * (n3 + 1) / 2;
        s5 = 5 * n5 * (n5 + 1) / 2;
        s15 = 15 * n15 * (n15 + 1) / 2;
        sum = s3 + s5 - s15;
        printf("%d\n", sum);
    }
    return 0;
}