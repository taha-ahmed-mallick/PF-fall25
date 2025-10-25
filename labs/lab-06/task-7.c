#include <stdio.h>

int main() {
    for (int i = 1; i < 11; i++) {
        printf("10x%d=%d\n", i, i*10);
        printf("9x%d=%d\n", 11-i, 9*(11-i));
    }
    printf("====================\n");
    for (int i = 1, j = 10; i<11; i++, j--) {
        printf("10x%d=%d\n", i, i*10);
        printf("9x%d=%d\n", 11-i, 9*(11-i));
    }
    return 0;
}