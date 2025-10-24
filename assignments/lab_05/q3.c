#include <stdio.h>

int main()
{
    int fscMarks, nts;
    printf("Enter your FSc. marks out of 1100: ");
    scanf("%d", &fscMarks);
    printf("Enter your NTS percentage: ");
    scanf("%d", &nts);
    float fscPercent = fscMarks / 1100.0 * 100;
    // Oxford
    if (fscPercent > 70)
    {
        if (nts >= 70)
        {
            printf("\tOxford\n");
            printf("\t======\n");
            printf("You are eligible for:\n");
            printf("1. IT Department\n2. Electronics Department\n3. Telecom Department");
        }
        else if (nts >= 60)
        {
            printf("\tOxford\n");
            printf("\t======\n");
            printf("You are eligible for:\n");
            printf("1. Electronics Department\n2. Telecom Department");
        }
        else if (nts >= 50)
        {
            printf("\tOxford\n");
            printf("\t======\n");
            printf("You are eligible for:\nTelecom Department");
        }
        else
            printf("Sorry your NTS marks are too low.");
    }
    else
        printf("Sorry your FSc. percentage doesn\'t meet the requirement.");

    // MIT
    if (nts > 50)
    {
        if (fscPercent >= 60)
        {
            printf("\n\tMIT\n");
            printf("\t===\n");
            printf("You are eligible for:\n");
            printf("1. IT Department\n2. Chemical Department\n3. Computer Department");
        }
        else if (fscPercent >= 50)
        {
            printf("\n\tMIT\n");
            printf("\t===\n");
            printf("You are eligible for:\n");
            printf("1. Chemical Department\n2. Computer Department");
        }
        else if (fscPercent >= 40)
        {
            printf("\n\tMIT\n");
            printf("\t===\n");
            printf("You are eligible for:\nComputer Department");
        }
        else
            printf("\nSorry your FSc. percentage is too low.");
    }
    else
        printf("\nYour NTS marks doesn\'t meet the criteria.");
    return 0;
}