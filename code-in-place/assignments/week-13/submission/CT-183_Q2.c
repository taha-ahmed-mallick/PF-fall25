#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = (int *) calloc(10, sizeof(int));
    printf("Elements of this dynamic array are:\n");
    for (int i = 0; i < 10; i++)
        printf("arr[%d]: %d\n", i, arr[i]);
    free(arr);
    arr = NULL;
    return 0;
}