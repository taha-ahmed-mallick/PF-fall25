#include <stdio.h>

int blackTimeCalc(char size);
int whiteTimeCalc(char size);
int main()
{
    char type, cup_size;
    int time;
    printf("Coffee Time Calc\n");
    printf("================\n");
    printf("Enter the type of coffee Black (B), or White (W): ");
    scanf("%c", &type);
    printf("Enter the size of cup that you want\nD for Double\nN for normal.");
    printf("\nSize: ");
    scanf(" %c", &cup_size);
    printf("\n\n");
    switch (type)
    {
    case 'b':
    case 'B':
        printf("\tYou ordered Black Coffee.\n\n");
        time = blackTimeCalc(cup_size);
        printf("Total time: %d", time);
        break;
    case 'w':
    case 'W':
        printf("\tYou ordered White Coffee.\n\n");
        time = whiteTimeCalc(cup_size);
        printf("Total time: %d", time);
        break;
    default:
        printf("Invalid type of coffee entered.");
        break;
    }
    return 0;
}
int whiteTimeCalc(char size)
{
    int time = 76;
    printf("Operation\tTime\n");
    printf("1. Put Water\t15 mins\n");
    printf("2. Sugar\t15 mins\n");
    printf("3. Mix Well\t20 mins\n");
    printf("4. Add Coffee\t2 mins\n");
    printf("5. Add milk\t4 mins\n");
    printf("6. Mix Well\t20 mins\n");
    switch (size)
    {
    case 'N':
    case 'n':
        return time;
        break;

    default:
        printf("\n\t\tTime increased since cup size was larger.\n\n");
        return time * 1.5;
        break;
    }
    return 0;
}
int blackTimeCalc(char size)
{
    int time = 105;
    printf("Operation\tTime\n");
    printf("1. Put Water\t20 mins\n");
    printf("2. Sugar\t20 mins\n");
    printf("3. Mix Well\t25 mins\n");
    printf("4. Add Coffee\t15 mins\n");
    printf("5. Add milk\t-\n");
    printf("6. Mix Well\t25 mins\n");
    switch (size)
    {
    case 'N':
    case 'n':
        return time;
        break;

    default:
        printf("\n\t\tTime increased since cup size was larger.\n\n");
        return time * 1.5;
        break;
    }
    return 0;
}