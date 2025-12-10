#include <stdio.h>

int main() {
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int *ptr = &matrix[0][0];
    printf("%d\n", *(ptr+4));
    return 0;
}