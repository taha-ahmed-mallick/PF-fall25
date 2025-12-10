#include <stdio.h>

int find_mode(int num[], int size)
{
    int digits[size];
    int freq[size];
    for (int i = 0; i < size; i++)
        digits[i] = freq[i] = 0;
    int count = 0, found = 0, zeroPresent = 0;
    for (int i = 0; i < size; i++)
    {
        found = 0;
        for (int j = 0; j < size; j++)
        {
            if (num[i] == digits[j])
            {
                if (num[i] == 0 && !zeroPresent) {
                    count++;
                    zeroPresent = 1;
                }
                freq[j]++;
                found = 1;
                break;
            }
        }
        if (!found)
        {
            digits[count] = num[i];
            freq[count] = 1;
            count++;
        }
    }
    for (int i = 0; i < count; i++)
        printf("%d %d\n", digits[i], freq[i]);
    int returnIndex = 0;
    for (int i = 0; i < count; i++)
    {
        if (freq[i] > freq[returnIndex])
            returnIndex = i;
        else if (freq[i] == freq[returnIndex] && digits[i] < digits[returnIndex])
        {
            printf("special: %d %d %d %d\n", freq[i], freq[returnIndex], digits[i], digits[returnIndex]);
            returnIndex = i;
        }
    }
    return digits[returnIndex];
}

int main()
{
    int arr[] = {2, 5, 1, 4, 1,0, 3, 5, 1, 5, 5, 1, 0};
    printf("%d", find_mode(arr, sizeof(arr) / sizeof(arr[0])));
    return 0;
}