// Problem Link: https://leetcode.com/problems/power-of-three/
#include <stdbool.h>

bool isPowerOfThree(int n) {
    if (n <= 0) return false;
    while (n!=1) {
        if (n%3==0)
            n/=3;
        else 
            return false;
    }
    return true;
}