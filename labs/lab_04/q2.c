#include <stdio.h>

int main()
{
    int num;
    do
    {
        printf("Enter an 8-bit number (0-255): ");
        scanf("%d", &num);
    } while (num < 0 || num > 255);
    if ((num & 0b01001000) == 0b01001000)
    {
        printf("The fourth and seventh bits are on.\n");
        num = num & 0b10110111;
        printf("with 7th and 4th bits in off position: %d", num);
    }
    else
    {
        printf("Either fourth or seventh bits are off or both of them are off.");
    }
    return 0;
}