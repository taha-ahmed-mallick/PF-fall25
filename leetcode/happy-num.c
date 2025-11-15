// Problem Link: https://leetcode.com/problems/happy-number/
#include <stdbool.h>
bool isHappy(int n)
{
    while (n != 1 && n != 4)
    {
        int sum = 0;
        while (n != 0)
        {
            int digit = n % 10;
            n /= 10;
            sum += digit * digit;
        }
        n = sum;
    }
    return n == 1;
}