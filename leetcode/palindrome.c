// Problem Link: https://leetcode.com/problems/palindrome-number/
#include <stdbool.h>
bool isPalindrome(int x)
{
    if (x < 0)
        return false;
    long y = 0;
    int temp = x;
    while (x != 0)
    {
        y = y * 10 + (x % 10);
        x /= 10;
    }
    if (temp == y)
        return true;
    else
        return false;
}