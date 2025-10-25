#include <stdio.h>
#include <string.h>

int main()
{
    char name[50];
    printf("Program: Print your name in reverse\n");
    printf("Enter your name:");
    gets(name);
    for (int i = strlen(name) - 1; i >= 0; i--)
        printf("%c", name[i]);
}