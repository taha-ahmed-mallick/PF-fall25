#include <stdio.h>

int main() {
    int arr[5];
    // 5 - _ _ _
    // 0 1 2 3 4
    arr[0] = 5;
    scanf("%d", &arr);
    printf("%d %d", arr[0], arr[1]);
    return 0;
}