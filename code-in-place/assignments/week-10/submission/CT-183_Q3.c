#include <stdio.h>
#include <string.h>

int main()
{
    char first[19] = "Taha Ahmed ";
    char last[] = "Mallick";
    strcat(first, last);
    printf("The full name after concatenation is %s.", first);
    return 0;
}