#include <stdio.h>

int main()
{
    // inputs numerator and denominator
    int nume, deno;
    printf("Enter numerator: ");
    scanf("%d", &nume);
    printf("Enter denominator: ");
    scanf("%d", &deno);
    // check if division is possible
    if (deno == 0)
    {
        // aborts if not possible
        printf("Can\'t divide by zero.\n");
    }
    else // proceeds if possible
        printf("The answer of %d/%d is %f", nume, deno, (float)nume / deno);
    return 0;
}