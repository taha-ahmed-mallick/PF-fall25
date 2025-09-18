#include <stdio.h>

int main()
{
    // Declare variable
    int year;
    // input year
    printf("Enter the Year: ");
    scanf("%d", &year);
    // checks condition
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        printf("This is a leap year");
    }
    else
    {
        printf("This is not a leap year");
    }
    return 0;
}