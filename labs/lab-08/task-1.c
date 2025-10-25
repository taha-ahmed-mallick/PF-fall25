#include <stdio.h>
#include <string.h>

int main() {
    char name[50];
    printf("Greeting Program \n");
    printf("Enter your name:");
    gets(name);
    printf("Hello, %s",name);
}