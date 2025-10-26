#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20], str2[20];
    printf("Input first string: ");
    gets(str1);
    printf("Input second string: ");
    gets(str2);
    if (strcmp(str1, str2) == 0)
        printf("Both strings are equal.");
    else
        printf("Strings provided are unequal.");
    return 0;
}