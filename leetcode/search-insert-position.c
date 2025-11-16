// Problem Link: https://leetcode.com/problems/search-insert-position/

int searchInsert(int *nums, int numsSize, int target)
{
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] == target)
            return i;
        else if (nums[i] > target)
            return i;
        if (i == numsSize - 1)
            return i + 1;
    }
    return 0;
}