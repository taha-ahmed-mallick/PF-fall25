#include <stdio.h>

int recursive(int num)
{
    int last = num % 10;
    int rest = num / 10;
    int result = rest - last * 2;
    printf(" -> %d-%d = %d", rest, last * 2, result);
    if (result < 10 && result > -10)
        return result;
    else
        recursive(result);
}

int main()
{
    int num;
    printf("Fries khila: ");
    scanf("%d", &num);
    printf("PROCESS: %d", num);
    int result = recursive(num);
    printf("\nRESULT: ");
    if (result == 7 || result == -7 || result == 0)
        printf("Divisible by 7.");
    else
        printf("Not divisible by 7.");
    return 0;
}