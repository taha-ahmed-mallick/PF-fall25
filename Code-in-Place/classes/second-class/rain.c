#include <stdio.h>

int main() {
    char isRain;
    printf("Is it raining (y/n): ");
    scanf("%c", &isRain);
    if (isRain == 'y') {
        printf("Take out an umbrella\n");
    } else printf("Weather is good to go!\n");
    return 0;
}