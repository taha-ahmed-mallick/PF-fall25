#include <stdio.h>

int main() {
    int marks = 7;
    float weight = 68.35;
    char grade = 'A';
    int* marks_ptr = &marks;
    float* weight_ptr = &weight;
    char* grade_ptr = &grade;
    printf("Printing values using ptr deref\n");
    printf("Integer marks: %d\n", *marks_ptr);
    printf("Float weight: %.2f\n", *weight_ptr);
    printf("Character grade: %c\n", *grade_ptr);
    return 0;
}