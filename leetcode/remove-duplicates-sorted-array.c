// Problem Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/

int removeDuplicates(int* nums, int numsSize) {
    for (int i = 1; i < numsSize; i++)
        if (nums[i-1] == nums[i]) {
            numsSize--, i--;
            for (int j = i; j < numsSize; j++)
                nums[j] = nums[j+1];
        }
    return numsSize;
}