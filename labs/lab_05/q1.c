#include <stdio.h>

int main() {
    char input;
    printf("Do you want to delete the file [(Y/y)/(N/n)]: ");
    scanf("%c", &input);
    switch (input)
    {
    case 'Y':
    case 'y':
        printf("Deleted successfully.");
        break;
    case 'N':
    case 'n':
        printf("Deletion cancelled.");
        break;
    default:
        printf("Invalid input");
        break;
    }
    return 0;
}