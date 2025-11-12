#include <stdio.h>

void print_char(char*);

int main() {
    char grade = 'A';
    print_char(&grade);
    return 0;
}

void print_char(char* grade) {
    printf("Grade is: %c\n", *grade);
}