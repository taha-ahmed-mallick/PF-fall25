#include <stdio.h>

int main()
{
    int n, count = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Input elements of array.\n");
    for (int i = 0; i < n; i++)
        scanf(" %d", &arr[i]);
    for (int i = 0; i < n; i++)
        if (arr[i] % 2 == 0)
            count++;
    printf("Total count of even numbers in the array is %d.", count);
    return 0;
}