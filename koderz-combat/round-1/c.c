#include <stdio.h>
// LINK: https://vjudge.net/contest/755028#problem/C
int main()
{
    int s, t, a, b, m, n;
    scanf("%d %d", &s, &t);
    scanf("%d %d", &a, &b);
    scanf("%d %d", &m, &n);
    int apples[m], oranges[n];
    for (int i = 0; i < m; i++)
        scanf("%d ", &apples[i]);
    for (int i = 0; i < n; i++)
        scanf(" %d", &oranges[i]);
    for (int i = 0; i < m; i++)
        apples[i] += a;
    for (int i = 0; i < n; i++)
        oranges[i] += b;
    int total_apples = 0;
    int total_oranges = 0;
    for (int i = 0; i < m; i++)
    {
        if (apples[i] >= s && apples[i] <= t)
            total_apples++;
    }
    for (int i = 0; i < n; i++)
    {
        if (oranges[i] >= s && oranges[i] <= t)
            total_oranges++;
    }
    printf("%d\n%d", total_apples, total_oranges);
    return 0;
}

// void countApplesAndOranges() {

// }
// void countApplesAndOranges(int s, int t, int a, int b, int apples[], int oranges[]);