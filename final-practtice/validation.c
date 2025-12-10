#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    while (scanf("%d", &num) != 1) {
        while(getchar() != '\n');
        printf("Invalid!.\n");
    }
    printf("onlyNumbers: %d.", num);   
    return 0;
}