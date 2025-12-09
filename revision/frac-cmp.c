#include <stdio.h>

typedef struct
{
    int nume;
    int deno;
} Frac;

Frac input(int n)
{
    Frac frac;
    printf("====Fraction %d====\n", n);
    printf("Enter numerator: ");
    scanf("%d", &frac.nume);
    printf("Enter denominator: ");
    scanf("%d", &frac.deno);
    while (frac.deno == 0)
    {
        printf("Denominator cannot be zero. Please enter a valid denominator: ");
        scanf("%d", &frac.deno);
    }
    return frac;
}

int compare(Frac f1, Frac f2)
{
    int first = f1.nume * f2.deno;
    int second = f2.nume * f1.deno;

    if (first < second)
        return -1; // f1 < f2
    else if (first > second)
        return 1; // f1 > f2
    else
        return 0; // f1 == f2
}

int main()
{
    printf("\t=====Fraction Adder=====\n\n");
    Frac f1 = input(1);
    Frac f2 = input(2);
    int cmp = compare(f1, f2);
    switch (cmp)
    {
    case 0:
        printf("The fractions are equal.\n");
        printf("%d / %d = %d / %d\n", f1.nume, f1.deno, f2.nume, f2.deno);
        break;
    case 1:
        printf("Fraction 1 is greater than Fraction 2.\n");
        printf("%d / %d > %d / %d\n", f1.nume, f1.deno, f2.nume, f2.deno);
        break;
    case -1:
        printf("Fraction 1 is less than Fraction 2.\n");
        printf("%d / %d < %d / %d\n", f1.nume, f1.deno, f2.nume, f2.deno);
        break;
    }
    return 0;
}