#include <stdio.h>

int main()
{
    int time;
    float avgSpeed, distance1, distance2, distance3, distance4, distance5;
    printf("Average Speed Calculator\n");
    printf("Please Ensure that the Distance should never be negative\n");
    printf("Enter distance1: ");
    scanf("%f", &distance1);
    printf("Enter distance2: ");
    scanf("%f", &distance2);
    printf("Enter distance3: ");
    scanf("%f", &distance3);
    printf("Enter distance4: ");
    scanf("%f", &distance4);
    printf("Enter distance5: ");
    scanf("%f", &distance5);
    printf("Enter the time between (1-5) to calculate avg Speed: ");
    scanf("%d", &time);

    time == 1 ? avgSpeed = (distance1) / time : time == 2 ? avgSpeed = (distance1 + distance2) / time
                                            : time == 3   ? avgSpeed = (distance1 + distance2 + distance3) / time
                                            : time == 4   ? avgSpeed = (distance1 + distance2 + distance3 + distance4) / time
                                            : time == 5   ? avgSpeed = (distance1 + distance2 + distance3 + distance4 + distance5) / time
                                                          : printf("Please enter correct time between 1 to 5");

    time > 0 && time <= 5 ? printf("Average Speed is %.2f miles/hr", avgSpeed * 0.621371) : printf("");
    return 0;
}