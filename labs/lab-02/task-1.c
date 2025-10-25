#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if (age >= 18)
    {
        int hasID;
        printf("You are eligible for Voting.");
        printf("\nDo you have ID [0/1]: ");
        scanf("%d", &hasID);
        if (hasID)
            printf("You can vote!!");
        else
            printf("Generate your ID to cast vote.");
    }
    else
    {
        printf("You are not eligible for Voting.");
    }
    return 0;
}