#include <stdio.h>
#include <windows.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int m, n, p;
    printf("Enter the order of matrices...\n");
    printf("Matrix A: m x n\nMatrix A: n x p\n");
    printf("Enter value of m: ");
    scanf("%d", &m);
    printf("Enter value of n: ");
    scanf("%d", &n);
    printf("Enter value of p: ");
    scanf("%d", &p);
    int a[m][n], b[n][p], c[m][p];
    printf("Enter the values for Matrix A (%d x %d)\n", m, n);
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            scanf(" %d", &a[i][j]);
    printf("Enter the values for Matrix B (%d x %d)\n", n, p);
    for (int i = 0; i < n; i++)
        for (int j = 0; j < p; j++)
            scanf(" %d", &b[i][j]);
    printf("\t====Matrices Entered====\n\n");
    printf("Matrix A:\n");
    for (int i = 0; i < m; i++)
    {
        printf("│");
        for (int j = 0; j < n; j++)
        {
            printf("%d", a[i][j]);
            j == n - 1 ? 0 : printf(" ");
        }
        printf("│\n");
    }
    printf("Matrix B:\n");
    for (int i = 0; i < n; i++)
    {
        printf("│");
        for (int j = 0; j < p; j++)
        {
            printf("%d", b[i][j]);
            j == n - 1 ? 0 : printf(" ");
        }
        printf("│\n");
    }
    printf("\t====Multiplication Result====\n\n");
    printf("Matrix C:\n");
    for (int i = 0; i < m; i++)
    {
        printf("│");
        for (int j = 0; j < p; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < n; k++)
                c[i][j] += a[i][k] * b[k][j];
            printf("%d", c[i][j]);
            j == n - 1 ? 0 : printf(" ");
        }
        printf("│\n");
    }
    return 0;
}