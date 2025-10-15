#include <stdio.h>
#include <string.h>

int main() {
    char arr[5];
    int secret = 42;

    strcpy(arr, "Taha123"); // writes past arr into secret’s memory

    printf("secret = %d\n", secret);
    return 0;
}
