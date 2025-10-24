#include <stdio.h>

int main()
{
    // Given Fibonacci Series
    // Fibonacci series is:1 1 2 3 5 8 13 25..........
    // therefore initializing prev and next to 1
    int prev = 1, next = 1, sum = 0;
    printf("Fibonacci series: %d", prev);
    while (next <= 1000)
    {
        printf(", %d", next);
        if (next % 3 == 0 || next % 5 == 0 || next % 7 == 0)
            sum += next;
        next += prev;
        prev = next - prev;
    }
    printf("\nSum of fibonacci numbers divisible by 3, 5 or 7 is %d.", sum);
    // using for-loop
    prev = 1, sum = 0;
    int temp;
    printf("\n\nFibonacci series: %d", prev);
    for (next = 1; next < 1000; next = temp)
    {
        printf(", %d", next);
        if (next % 3 == 0 || next % 5 == 0 || next % 7 == 0)
            sum += next;
        temp = next + prev;
        prev = next;
    }
    printf("\nSum of fibonacci numbers divisible by 3, 5 or 7 is %d.", sum);
    return 0;
}