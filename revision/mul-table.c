#include <stdio.h>
#include <stdlib.h>
#ifdef _WIN32
#include <windows.h>
#endif

int main() {
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif
    int r, c;
    printf("Enter no. of rows: ");
    scanf("%d", &r);
    printf("Enter no. of columns: ");
    scanf("%d", &c);
    int **tbl = (int **) malloc(r*sizeof(int *));
    for (int i = 0; i < r; i++)
        tbl[i] = (int*) malloc(c*sizeof(int));
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++){
            tbl[i][j] = (i+1)*(j+1);
            printf("%d", tbl[i][j]);
        }
        printf("\n");
    }
    for (int i = -1; i < r; i++){
        for (int j = -1; j < c; j++){
            if (i == -1) 
            printf("%d", tbl[i][j]);
        }
        printf("\n");
    }

    return 0;
}