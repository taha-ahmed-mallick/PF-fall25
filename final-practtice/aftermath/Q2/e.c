#include <stdio.h>

void func(int x);

int main() {
    func(5);
    func(5);
    return 0;
}

void func(int x) {
    static int a = 1;
    a = a * x;
    printf("%d\n", a);
}