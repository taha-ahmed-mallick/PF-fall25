#include <stdio.h>

int main() {
    int a = 8, b = 13, x = 0, y= 10;
    for (int k = --a; k < b; k++) {
        x = x + k;
        y = y - x--;
    }
    printf("%d %d", x, y);
    x = 24, y = 60;
    while((y-x)%5!=0) {
        printf("%d ", y);
        y = y -7;
    }
    return 0;
}