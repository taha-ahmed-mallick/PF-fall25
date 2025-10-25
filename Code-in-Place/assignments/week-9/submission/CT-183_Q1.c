#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n], temp[n];
    printf("Input elements of array.\n");
    for (int i = 0; i < n; i++)
        scanf(" %d", &arr[i]);
    for (int i = 0; i < n; i++)
        temp[i] = arr[n - i - 1];
    printf("Reversed\n");
    for (int i = 0; i < n; i++)
        printf("%d ", temp[i]);
    return 0;
}