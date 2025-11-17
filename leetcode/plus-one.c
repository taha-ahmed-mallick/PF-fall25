// Problem Link: https://leetcode.com/problems/plus-one/

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *plusOne(int *digits, int digitsSize, int *returnSize)
{
    digits[digitsSize - 1]++;
    *returnSize = digitsSize;
    for (int i = *returnSize - 1; i != 0; i--)
        if (digits[i] == 10)
        {
            digits[i] = 0;
            digits[i - 1]++;
        }
        else
            break;
    if (digits[0] == 10)
    {
        (*returnSize)++;
        int *result = (int *)malloc(*returnSize * sizeof(int));
        for (int i = *returnSize - 1; i != 1; i--)
            result[i] = digits[i - 1];
        result[0] = 1;
        result[1] = 0;
        return result;
    }
    return digits;
}