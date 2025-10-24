#include <stdio.h>

int main() {
    float cal, fat, fat_cal, perc;
    printf("Enter the total calories: ");
    scanf("%f", &cal);
    printf("Enter the amount of fats (gms): ");
    scanf("%f", &fat);
    fat_cal = fat * 9;
    perc = fat_cal/cal;
    if (cal < 0 || fat < 0 || perc > 1) {
        printf("Invalid inputs!");
        return 0;
    }
    printf("REPORT\n");
    printf("======");
    printf("\nThe calories from fats are: %.2f\n", fat_cal);
    printf("The percentage of calories from fats are: %.2f\n", perc*100);
    if (perc < 0.3) {
        printf("The food is low in fat.");
    }
    return 0;
}