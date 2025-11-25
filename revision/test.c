#include <stdio.h>
typedef unsigned char uc;
int main() {
    uc x;
    x = 0b11111111;
    printf("%c %d %x %o\n", x, x, x, x);
    return 0;
}