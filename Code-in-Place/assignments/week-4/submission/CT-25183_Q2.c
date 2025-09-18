#include <stdio.h>

int main()
{
    // declare variables
    int a, b, c;
    // input the length of sides
    printf("\t\tEnter the side lengths of triangle\n");
    printf("\t\t==================================\n");
    printf("1st side(a): ");
    scanf("%d", &a);
    printf("2nd side(b): ");
    scanf("%d", &b);
    printf("3rd side(c): ");
    scanf("%d", &c);
    // applying condition
    if ((a+b) > c && (b+c) > a && (a+c) > b) {
        if (a==b&&b==c&&a==c) {
            printf("This is an Equilateral Triangle.");
        } else if (a==b || b==c || a==c) {
            printf("This is an Isosceles Triangle.");
        } else {
            printf("This is a Scalene Triangle.");
        }
    }
    else printf("Not a valid Triangle.");
    return 0;
}