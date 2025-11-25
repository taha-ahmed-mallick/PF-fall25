#include <stdio.h>
// print the numbers until users enters 0
int main() {
    for (int i = 1; i != 0; i--) {
        printf("%d\n", i);
        scanf("%d", &i);
        i++;
    }
    printf("Terminating...\n");
    return 0;
}