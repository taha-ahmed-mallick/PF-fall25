// Problem Link: https://leetcode.com/problems/sqrtx/

int mySqrt(int x)
{
    long i = 0;
    for (i; i * i <= x; i++)
    {
        if (i * i == x)
            return i;
    }
    return --i;
}