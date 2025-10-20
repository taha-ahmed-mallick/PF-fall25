#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40};
    int n = 4, sum = 0;
    for (int i = 0; i < n; i++) sum+=arr[i];
    printf("The sum of arr is: %d\n", sum);
    int arr1[] = {5, 12, 3, 18, 7};
    int max = arr[0];
    for (int i = 0; i < 5; i++) {
        if (max < arr1[i]) max = arr1[i];
    }
    printf("Maximum number: %d\n", max);
    return 0;
}