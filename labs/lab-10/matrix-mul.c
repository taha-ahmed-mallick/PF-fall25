#include <stdio.h>

void input(int rows, int cols, int arr[][cols]);
void print(int rows, int cols, int arr[][cols]);
void mul_mat(int m, int n, int p, int a[][n], int b[][p], int c[][p]);

int main()
{
    int m, n, p;
    printf("Enter the order of matrices...\n");
    printf("Matrix A: m x n\nMatrix B: n x p\n");
    printf("Enter value of m: ");
    scanf("%d", &m);
    printf("Enter value of n: ");
    scanf("%d", &n);
    printf("Enter value of p: ");
    scanf("%d", &p);
    int a[m][n], b[n][p], c[m][p];
    printf("Enter the values for Matrix A (%d x %d)\n", m, n);
    input(m, n, a);
    printf("Enter the values for Matrix B (%d x %d)\n", n, p);
    input(n, p, b);
    printf("\t====Matrices Entered====\n\n");
    printf("Matrix A:\n");
    print(m, n, a);
    printf("Matrix B:\n");
    print(n, p, b);
    printf("\t====Multiplication Result====\n\n");
    printf("Matrix C:\n");
    mul_mat(m, n, p, a, b, c);
    print(m, p, c);
    return 0;
}

void input(int rows, int cols, int arr[][cols]) {
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf(" %d", &arr[i][j]);
}

void print(int rows, int cols, int arr[][cols]) {
    for (int i = 0; i < rows; i++)
    {
        printf("|");
        for (int j = 0; j < cols; j++)
        {
            printf("%d", arr[i][j]);
            j == cols - 1 ? 0 : printf(" ");
        }
        printf("|\n");
    }
}

void mul_mat(int m, int n, int p, int a[][n], int b[][p], int c[][p]) {
    for (int i = 0; i < m; i++)
        for (int j = 0; j < p; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < n; k++)
                c[i][j] += a[i][k] * b[k][j];
        }
}