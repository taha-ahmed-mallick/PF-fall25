#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    printf("Enter elements of array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    printf("The elements stored in that dynamic array is:\n");
    for (int i = 0; i < n; i++)
        printf("arr[%d]: %d\n", i, arr[i]);
    free(arr);
    arr = NULL;
    return 0;
}