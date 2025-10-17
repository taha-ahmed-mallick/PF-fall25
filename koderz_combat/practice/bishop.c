#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int t, r, c;
    char board[8][8];
    do
    {
        printf("Test cases should exist between (1-36)\n");
        printf("Enter the number of test cases: ");
        scanf("%d", &t);
    } while (t < 1 || t > 36);

    for (int i = 0; i < t; i++)
    {
        r = (rand() % (6 - 1 + 1)) + 1;
        c = (rand() % (6 - 1 + 1)) + 1;
        printf("r: %d, c: %d\n", r, c);
        for (int j = 0; j < 8; j++)
            for (int k = 0; k < 8; k++)
                board[j][k] = (j == r && c == k) ? 'B' : '.';
        int x, y;
        x = r, y = c;
        while (--x >= 0 && --y >= 0)
            board[x][y] = '#';
        x = r, y = c;
        while (--x >= 0 && ++y <= 7)
            board[x][y] = '#';
        x = r, y = c;
        while (++x <= 7 && --y >= 0)
            board[x][y] = '#';
        x = r, y = c;
        while (++x <= 7 && ++y <= 7)
            board[x][y] = '#';
        for (int j = 0; j < 8; j++)
        {
            for (int k = 0; k < 8; k++)
                printf("%c", board[j][k]);
            printf("\n");
        }
    }
    return 0;
}