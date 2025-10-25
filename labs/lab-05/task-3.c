#include <stdio.h>

int main(void)
{
    int dep, spe;

    printf("This program will tell you your department based on your input.\n");

    printf("\nEnter your department:\n");
    printf("1. BCIT\n");
    printf("2. Software Engineering\n");
    printf("3. Electrical Engineering\n");
    printf("Your choice: ");
    scanf("%d", &dep);

    switch (dep)
    {
    case 1:
        printf("\nYour department is BCIT.\n");

        printf("Select your specialization:\n");
        printf("1. CSCY\n");
        printf("2. CSDS\n");
        printf("3. CSGA\n");
        printf("4. CSAI\n");
        printf("Your choice: ");
        scanf("%d", &spe);

        switch (spe)
        {
        case 1:
            printf("Your specialization is CSCY.\n");
            break;
        case 2:
            printf("Your specialization is CSDS.\n");
            break;
        case 3:
            printf("Your specialization is CSGA.\n");
            break;
        case 4:
            printf("Your specialization is CSAI.\n");
            break;
        default:
            printf("Invalid specialization choice.\n");
        }
        break;

    case 2:
        printf("Your department is Software Engineering.\n");
        break;

    case 3:
        printf("Your department is Electrical Engineering.\n");
        break;

    default:
        printf("Invalid department choice.\n");
    }

    return 0;
}