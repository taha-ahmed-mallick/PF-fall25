#include <stdio.h>

int main()
{
    int sum = 0, n;
    float avg;
    printf("How many Courses Offered to you:");
    scanf("%d", &n);
    int marks[n];
    printf("Enter the Courses Marks:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i < n; i++)
    {
        sum += marks[i];
    }
    avg = sum / n;

    printf("The sum is %d\n", sum);
    printf("The Average is %.2f", avg);
    return 0;
}