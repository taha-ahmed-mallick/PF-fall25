#include <stdio.h>
// LINK: https://vjudge.net/contest/755028#problem/B
int main()
{
    int w;
    scanf("%d", &w);
    if (w % 2 == 0)
    {
        if (w == 2) {
            printf("NO");
            return 0;
        }
        printf("YES");
    }
    else
        printf("NO");
    return 0;
}