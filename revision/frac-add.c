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
    // make it so that it checks for denominator != 0 and keeps asking until valid input is given
    while (frac.deno == 0)
    {
        printf("Denominator cannot be zero. Please enter a valid denominator: ");
        scanf("%d", &frac.deno);
    }
    return frac;
}

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

Frac sum(Frac f1, Frac f2)
{
    Frac frac;
    frac.nume = f1.nume * f2.deno + f2.nume * f1.deno;
    frac.deno = f1.deno * f2.deno;

    int g = gcd(frac.nume, frac.deno);
    frac.nume /= g;
    frac.deno /= g;

    return frac;
}

// a/b + c/d = ad+bc / bd

int main()
{
    printf("\t=====Fraction Adder=====\n\n");
    Frac f1 = input(1);
    Frac f2 = input(2);
    Frac result = sum(f1, f2);
    printf("Result of summation is: %d/%d.", result.nume, result.deno);
    return 0;
}