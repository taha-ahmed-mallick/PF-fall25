#include <stdio.h>

union Data
{
    int num;
    float floating;
    char character;
};


int main() {
    union Data d;

    d.num = 83;
    printf("After assigning integer a value\n");
    printf("d.num = %d\nd.floating = %f\nd.character = %c\n", d.num, d.floating, d.character);

    d.floating = 2.71;
    printf("After assigning float a value\n");
    printf("d.num = %d\nd.floating = %f\nd.character = %c\n", d.num, d.floating, d.character);

    d.character = 'A';
    printf("After assigning character a value\n");
    printf("d.num = %d\nd.floating = %f\nd.character = %c\n", d.num, d.floating, d.character);
    return 0;
}