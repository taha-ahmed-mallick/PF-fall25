#include <stdio.h>
// LINK: https://vjudge.net/problem/CodeForces-4A
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