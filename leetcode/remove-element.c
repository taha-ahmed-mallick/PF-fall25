// Problem Link: https://leetcode.com/problems/remove-element/

int removeElement(int* nums, int numsSize, int val) {
    for (int i = 0; i < numsSize; i++)
        if (val == *(nums+i)){
            for (int j = i+1; j < numsSize; j++)
                *(nums+j-1) = *(nums+j);
            numsSize--, i--;
        }
    return numsSize;
}