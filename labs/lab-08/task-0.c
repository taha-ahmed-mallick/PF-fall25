#include <stdio.h>

int main()
{
    char name[] = "Taha";
    printf("%s\n", name);
    char dupname[5];
    for (int i = 0; i < 9; i++)
        dupname[i] = name[i];
    printf("%s", dupname);
    return 0;
}