#include <stdio.h>

int main()
{
    char input;
    printf("Enter a character: ");
    scanf("%c", &input);
    if (input >= 65 && input <= 90)
    {
        printf("An uppercase letter.");
    }
    else if (input >= 97 && input <= 122)
    {
        printf("A lowercase letter.");
    }
    else if (input >= 48 && input <= 57)
    {
        printf("A digit.");
    }
    else
    {
        printf("A speacial character.");
    }
    return 0;
}