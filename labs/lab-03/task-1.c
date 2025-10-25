#include <stdio.h>

int main()
{
    printf("Find Whether the Given Number is Positive, Negative or Neutral\n");
    int num;
    printf("Enter the Number: ");
    scanf("%d", &num);

    (num > 0) ? printf("Number is Positive") : (num < 0) ? printf("Number is Negative")
                                                         : printf("Number is Neutral");
    return 0;
}