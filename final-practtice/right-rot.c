#include <stdio.h>
// #include <stdlib.h>

void rotateArr(int* arr, int d, int n) {
    
    d %= n;

    int temp[n];

    for (int i = 0; i <n-d ; i++)
        temp[i+d] = arr[i];

    for (int i = 0; i <d; i++)
        temp[i] = arr[n - d + i];


    for (int i = 0; i < n; i++)
        arr[i] = temp[i];
}

int main() {
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int d = 15;

    rotateArr(arr, d, n);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}