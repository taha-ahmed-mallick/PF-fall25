#include <stdio.h>

int main()
{
    int r, c;
    printf("Enter No of Rows:");
    scanf("%d", &r);
    printf("Enter No of Cols:");
    scanf("%d", &c);
    int arr[r][c];
    int transpose[c][r];
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &arr[i][j]);

    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            transpose[i][j] = arr[j][i];
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}