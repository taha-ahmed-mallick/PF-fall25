// Problem Link: https://leetcode.com/problems/fizz-buzz

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

char **fizzBuzz(int n, int *returnSize)
{
    *returnSize = n;

    char **arr = malloc(n * sizeof(char *));

    for (int i = 0; i < n; i++)
    {
        arr[i] = malloc(10);

        int num = i + 1;

        if (num % 15 == 0)
            strcpy(arr[i], "FizzBuzz");
        else if (num % 3 == 0)
            strcpy(arr[i], "Fizz");
        else if (num % 5 == 0)
            strcpy(arr[i], "Buzz");
        else
            sprintf(arr[i], "%d", num);
    }

    return arr;
}