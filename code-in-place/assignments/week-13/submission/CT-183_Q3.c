#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = (int*) malloc(3*sizeof(int));
    printf("Enter the first three elements:\n");
    for (int i = 0; i < 3; i++) {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    arr = (int*) realloc(arr, 5*sizeof(int));
    printf("Enter rest of the elements:\n");
    for (int i = 3; i < 5; i++) {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }
    printf("Printing the elements:\n");
    for (int i = 0; i < 5; i++)
        printf("arr[%d]: %d\n", i, arr[i]);
    return 0;
}