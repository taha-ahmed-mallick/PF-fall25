// Problem Link: https://leetcode.com/problems/perfect-number/
#include <stdbool.h>
bool checkPerfectNumber(int num) {
    if (num <= 1) return false;
    int sum = 1;
    for (int i = 2; i*2 <= num; i++)
        if (num%i==0)
            sum+=i;
    if(sum==num) return true;
    else return false;
}