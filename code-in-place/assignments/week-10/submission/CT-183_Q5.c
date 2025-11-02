#include <stdio.h>
#include <string.h>

int main()
{
    char str[] = "Programming";
    char cpy[5];
    strncpy(cpy, str, 4);
    cpy[4] = '\0';
    printf("Copied string: %s.", cpy);
    return 0;
}