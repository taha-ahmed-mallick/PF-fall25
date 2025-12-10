#include <stdio.h>

void reverse(int arr[], int len){
    for (int i = 0; i < len/2; i++) {
        int ref = len-i-1;
        int temp = arr[i];
        printf("%d %d : ", arr[i], arr[ref]);
        arr[i] = arr[ref];
        arr[ref] = temp;
        printf("%d %d\n", arr[i], arr[ref]);
    }
}

int main() {
    int arr[5] = {1, 5, 8, 3, 2};
    reverse(arr, 5);
    for (int i =0; i < 5; i++)
        printf("%d ", arr[i]);
    return 0;
}