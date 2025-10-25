#include <stdio.h>

int main()
{
    int month;

    printf("Enter month number (1-12): ");
    scanf("%d", &month);

    switch (month)
    {
    case 1:
        printf("JAN");
        break;
    case 2:
        printf("FEB");
        break;
    case 3:
        printf("MAR");
        break;
    case 4:
        printf("APR");
        break;
    case 5:
        printf("MAY");
        break;
    case 6:
        printf("JUN");
        break;
    case 7:
        printf("JUL");
        break;
    case 8:
        printf("AUG");
        break;
    case 9:
        printf("SEP");
        break;
    case 10:
        printf("OCT");
        break;
    case 11:
        printf("NOV");
        break;
    case 12:
        printf("DEC");
        break;
    default:
        printf("Invalid Day");
    }

    return 0;
}