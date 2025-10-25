#include <stdio.h>
int main()
{

    int arr[5];
    printf("Please Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < 5; i++)
        printf("%d\n", arr[i]);

    return 0;
}