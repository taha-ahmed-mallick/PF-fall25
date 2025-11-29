#include <stdio.h>
#include <stdlib.h>
#ifdef _WIN32
#include <windows.h>
#endif

void printCell(int);
int size(int);
int max_digit = 0;

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif
    int r, c;
    printf("Enter no. of rows: ");
    scanf("%d", &r);
    printf("Enter no. of columns: ");
    scanf("%d", &c);
    c++;
    int **tbl = (int **)malloc(r * sizeof(int *));
    for (int i = 0; i < r; i++)
    {
        tbl[i] = (int *)malloc(c * sizeof(int));
        for (int j = 0; j < c; j++)
            if (!j)
                tbl[i][j] = (i + 1);
            else
                tbl[i][j] = (i + 1) * j;
    }

    max_digit = size(tbl[r - 1][c - 1]);
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
    printf("\033[1;34m");
    for (int i = -1; i < r; i++)
    {
        if (i == -1)
        {
            printf("┌");
            for (int j = 0; j < c; j++)
            {
                for (int k = 0; k < max_digit; k++)
                    printf("─");
                if (j == c - 1)
                    printf("┐\n");
                else
                    printf("┬");
            }
        }
        for (int j = 0; j < c; j++)
        {
            printf("│");
            if (i == -1)
            {
                if (j == 0)
                {
                    printCell(0);
                }
                else
                {
                    printCell(j);
                }
            }
            else
                printCell(tbl[i][j]);
            if (j == c - 1)
                printf("│\n");
        }
        if (i == r - 1)
        {
            printf("└");
            for (int j = 0; j < c; j++)
            {
                for (int k = 0; k < max_digit; k++)
                    printf("─");
                if (j == c - 1)
                    printf("┘\n");
                else
                    printf("┴");
            }
        }
        else
        {
            printf("├");
            for (int j = 0; j < c; j++)
            {
                for (int k = 0; k < max_digit; k++)
                    printf("─");
                if (j == c - 1)
                    printf("┤\n");
                else
                    printf("┼");
            }
        }
    }
    for (int i = 0; i < r; i++)
        free(tbl[i]);
    free(tbl);
    return 0;
}

void printCell(int val)
{
    int cur_size = size(val);
    if (val == 0)
        printf("●");
    else
        printf("%d", val);
    for (int i = 0; i < max_digit - cur_size; i++)
        printf(" ");
}

int size(int val)
{
    int cur_size = 0;
    if (val == 0)
        return 1;
    while (val != 0)
    {
        val /= 10;
        cur_size++;
    }
    return cur_size;
}