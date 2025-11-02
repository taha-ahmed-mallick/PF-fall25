#include <stdio.h>
#include <limits.h> // to incorporate min possible integers

int main()
{
    int max[] = {INT_MIN, INT_MIN}, n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Input elements of array.\n");
    for (int i = 0; i < n; i++)
        scanf(" %d", &arr[i]);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max[0])
        {
            max[1] = max[0];
            max[0] = arr[i];
        }
        else if (arr[i] > max[1] && arr[i] != max[0])
            max[1] = arr[i];
    }
    printf("The array of Maximums is {%d, %d}.", max[0], max[1]);
    return 0;
}