#include <stdio.h>

int main() {
    // declaration
    int units, bill = 0;
    // input
    printf("Enter units consumed: ");
    scanf("%d", &units);
    // calculation
    if (units < 0) {
        printf("Invalid!");
    } else {
        if (units <= 100) {
            bill = units * 5;
        } else if (units <= 200) {
            bill = (units - 100) *7 +500;//5*100
        } else {
            bill = (units - 200) * 10 + 1200;//5*100+7*100=1200
        }
        printf("Your electricity bill is %d Rs.", bill);
    }
    return 0;
}