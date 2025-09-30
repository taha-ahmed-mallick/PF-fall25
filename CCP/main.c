#include <stdio.h>
#include <windows.h> 

int main() {
    SetConsoleOutputCP(CP_UTF8);
    printf("\n o │ x │ o\n───┼───┼───\n x │ x │ o\n───┼───┼───\n o │ x │ x\n");
    return 0;
}

/*
 o │ x │ o 
───┼───┼───
 x │ x │ o 
───┼───┼───
 o │ x │ x 
*/