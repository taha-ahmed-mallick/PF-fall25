#include <stdio.h>
int main()
{
    int age, hasId;
    printf("Voting Checker!!!\n");

    printf("Enter your age:");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("Do you have an ID card? If yes, type (1). If no, type (0):");
        scanf("%d", &hasId);

        if (hasId == 1)
            printf("You are eligible for voting");
        else if (hasId == 0)
            printf("You meet the age requirement but not have ID Card.");
        else
            printf("Invalid Input!!");
    }
    else
        printf("You are not eligible for voting.");
    return 0;
}