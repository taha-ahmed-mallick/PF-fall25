// Problem Link: https://leetcode.com/problems/climbing-stairs/

int climbStairs(int n)
{
    if (n <= 2)
        return n;

    int prev2 = 1;
    int prev1 = 2;
    int current;

    for (int i = 3; i <= n; i++)
    {
        current = prev1 + prev2;
        prev2 = prev1;
        prev1 = current;
    }

    return current;
}