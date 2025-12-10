#include <stdio.h>

void running_sum(const int arr[], int size, int result[]) {
    int prev = 0;
    for (int i = 0; i < size; i++) {
        prev += arr[i];
        result[i] = prev;
    }
}

int main() {
    int arr[] = {10, -2, 3, -1, 5};
    int size = sizeof (arr) / sizeof arr[0];
    int result[size];
    running_sum(arr, size, result);
    printf("Given: ");
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\nResultant: ");
    for (int i = 0; i < size; i++)
        printf("%d ", result[i]);
    printf("\n");
    return 0;
}