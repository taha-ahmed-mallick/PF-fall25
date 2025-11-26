#include <stdio.h>
#include <string.h>

int main() {
    char name[20], last[20];
    
    char fmt[20];

    snprintf(fmt, sizeof(fmt), "%%%u[^\n]", sizeof(name)-1);
    scanf(fmt, name);
    while(getchar()!='\n');

    snprintf(fmt, sizeof(fmt), " %%%u[^\n]", sizeof(last)-1);
    scanf(fmt, last);
    while(getchar()!='\n');

    printf("Name: %s %s\n", name, last);

    printf("Using fgets\n");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';
    while(getchar()!='\n');

    fgets(last, sizeof(last), stdin);
    last[strcspn(last, "\n")] = '\0';
    while(getchar()!='\n');

    printf("Name: %s %s\n", name, last);
    return 0;
}