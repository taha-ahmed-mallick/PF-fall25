#include <stdio.h>
int main()
{
    char has_fever, has_flu, has_cough;
    
    printf("Covid-19 Predictor\n");

    printf("You have fever? (Y/N): ");
    scanf(" %c", &has_fever);

    printf("You have cough? (Y/N): ");
    scanf(" %c", &has_cough);

    printf("You have flu? (Y/N): ");
    scanf(" %c", &has_flu);

    if ((has_fever == 'Y' || has_fever == 'y') &&
        (has_flu == 'Y' || has_flu == 'y') &&
        (has_cough == 'Y' || has_cough == 'y'))
    {
        printf("You are infected.\n");
    }
    else if (has_fever == 'Y' || has_fever == 'y')
    {
        printf("You have fever only.\n");
    }
    else if (has_flu == 'Y' || has_flu == 'y')
    {
        printf("You have flu only.\n");
    }
    else if (has_cough == 'Y' || has_cough == 'y')
    {
        printf("You have cough only.\n");
    }
    else
    {
        printf("You are alright.\n");
    }

    return 0;
}