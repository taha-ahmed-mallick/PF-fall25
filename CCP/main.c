#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

char board[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};

void print_board();
int check_win();

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    int player = 1, box, flag = 0;
    char mark = 'X';
    while (1)
    {
        system("cls");
        printf("%d", board[0]);
        print_board();
        mark = player == 1 ? 'X' : 'O';
        if (flag)
            printf("Invalid input by Player %d\n\tEnter again.", player);
        printf("\nPlayer %d [%c], enter position (1-9): ", player, mark);
        scanf("%d", &box);
        if (box < 1 || box > 9 || board[box - 1] != box + '0')
        {
            flag = 1;
            continue;
        }
        board[box - 1] = mark;

        flag = 0;
        player = player == 1 ? 2 : 1;
    }
    return 0;
}

void print_board()
{
    printf("\t┌────────────────┐\n");
    printf("\t│TIC TAC TOE GAME│\n");
    printf("\t└────────────────┘\n");
    printf("\n\t    %c │ %c │ %c", board[0], board[1], board[2]);
    printf("\n\t   ───┼───┼───");
    printf("\n\t    %c │ %c │ %c", board[3], board[4], board[5]);
    printf("\n\t   ───┼───┼───");
    printf("\n\t    %c │ %c │ %c\n", board[6], board[7], board[8]);
}

int check_win() {
    if (board[0] == board[1] && board[1] == board[2]
    ||  board[3] == board[4] && board[4] == board[5]
    ||  board[6] == board[7] && board[7] == board[8]) return 1;
}

/*
 o │ x │ o
───┼───┼───
 x │ x │ o
───┼───┼───
 o │ x │ x
*/