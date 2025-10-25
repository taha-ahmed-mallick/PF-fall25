#include <stdio.h>
int main(void)
{
    int percentage;
    printf("Enter your Percentage:");
    scanf("%d", &percentage);
    if (percentage >= 90)
        printf("Grade: A");
    else if (percentage >= 80)
        printf("Grade: B");
    else if (percentage >= 70)
        printf("Grade: C");
    else if (percentage >= 60)
        printf("Grade: D");
    else
        printf("You are failed!!!");

    return 0;
}