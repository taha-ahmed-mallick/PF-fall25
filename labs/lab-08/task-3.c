#include <stdio.h>
#include <string.h>

int main()
{
    char first_name[20], surname[20], full[40];
    printf("Enter your First Name:");
    scanf("%s", &first_name);
    printf("Enter your Last Name:");
    scanf("%s", &surname);
    strcat(full, first_name);
    strcat(full, " ");
    strcat(full, surname);
    printf("Your Full Name is %s", full);
    return 0;
}