#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Hello";
    char new[6];
    strcpy(new, str);
    printf("The copied string is %s.", new);
    return 0;
}