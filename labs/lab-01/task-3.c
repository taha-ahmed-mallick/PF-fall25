#include <stdio.h>

int main() {
    int n1, n2;
    printf("Enter 1st num: ");
    scanf("%d", &n1);
    printf("Enter 2nd num: ");
    scanf("%d", &n2);
    printf("\n\tBefore");
    printf("\n\t======\n");
    printf("1st num: %d\n2nd num: %d\n", n1, n2);
    n1+=n2;
    n2=n1-n2;
    n1-=n2;
    printf("\n\tAfter");
    printf("\n\t=====\n");
    printf("1st num: %d\n2nd num: %d\n", n1, n2);
    return 0;
}