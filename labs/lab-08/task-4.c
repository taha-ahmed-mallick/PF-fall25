#include <stdio.h>
#include <string.h>

int main()
{
    char a[] = "Programming";
    char b[] = "Networking";
    int result = strcmp(a, b);
    if (result == 0)
    {
        printf("Strings are equal");
    }
    else if (result < 0)
    {
        printf("a is smaller than b");
    }
    else
    {
        printf("a is greater than b");
    }

    return 0;
}