#include <stdio.h>

int main()
{
    float dis1, dis2, dis3, dis4, dis5, time, avg_speed;
    printf("Car Average Speed Calculator!!!\n");
    printf("===============================\n");
    printf("Distance can never be negative!\n");
    printf("Enter distance1: ");
    scanf("%f", &dis1);
    printf("Enter distance2: ");
    scanf("%f", &dis2);
    printf("Enter distance3: ");
    scanf("%f", &dis3);
    printf("Enter distance4: ");
    scanf("%f", &dis4);
    printf("Enter distance5: ");
    scanf("%f", &dis5);
    printf("Enter the time you travelled in (1 to 5):");
    scanf("%f", &time);

    time == 1 ? avg_speed = (dis1) / time : time == 2 ? avg_speed = (dis1 + dis2) / time
                                        : time == 3   ? avg_speed = (dis1 + dis2 + dis3) / time
                                        : time == 4   ? avg_speed = (dis1 + dis2 + dis3 + dis4) / time
                                        : time == 5   ? avg_speed = (dis1 + dis2 + dis3 + dis4 + dis5) / time
                                                      : printf("Enter correct time\n");

    (time <= 5 && time > 0) ? printf("The Average Speed of your car is:%f", avg_speed) : printf("Program ended!");

    return 0;
}