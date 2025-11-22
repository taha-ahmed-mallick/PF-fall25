#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the length of the array: ");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    printf("====Squares of index array====\n[");
    for (int i = 0; i < n; i++)
    {
        arr[i] = i * i;
        if (n - i - 1)
            printf("%d, ", arr[i]);
        else
            printf("%d]", arr[i]);
    }
    return 0;
}