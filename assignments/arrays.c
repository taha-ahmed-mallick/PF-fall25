#include <stdio.h>

int main()
{
    int marks[] = {1, 5, 9, 5};
    for (int i = 0; i < 4; i++)
        printf("%d\n", marks[i]);
    char name[] = "Taha";
    printf("%s\n", name);
    char dupname[5];
    for (int i = 0; i < 9; i++)
        dupname[i] = name[i];
    printf("%s", dupname);
    return 0;
}