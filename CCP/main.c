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
        int check = check_win();
        if (check)
        {
            print_board();
            if (check == 1)
            {
                printf("Player %d Wins!!", player);
                return 0;
            }
            else if (check == -1)
            {
                printf("This is a draw...");
                return 0;
            }
        }
        flag = 0;
        player = player == 1 ? 2 : 1;
    }
    return 0;
}

void print_board()
{
    system("cls");
    printf("\t┌────────────────┐\n");
    printf("\t│TIC TAC TOE GAME│\n");
    printf("\t└────────────────┘\n");
    printf("\n\t    %c │ %c │ %c", board[0], board[1], board[2]);
    printf("\n\t   ───┼───┼───");
    printf("\n\t    %c │ %c │ %c", board[3], board[4], board[5]);
    printf("\n\t   ───┼───┼───");
    printf("\n\t    %c │ %c │ %c\n", board[6], board[7], board[8]);
}

int check_win()
{
    // Win Check
    if (board[0] == board[1] && board[1] == board[2]    // 1st row
        || board[3] == board[4] && board[4] == board[5] // 2nd row
        || board[6] == board[7] && board[7] == board[8] // 3rd row
        || board[0] == board[3] && board[3] == board[6] // 1st col
        || board[1] == board[4] && board[4] == board[7] // 2nd col
        || board[2] == board[5] && board[5] == board[8] // 3rd col
        || board[0] == board[4] && board[4] == board[8] // rht dig
        || board[2] == board[4] && board[4] == board[6] // lft dig
    )
        return 1;
    else
        return 0; // continue as normal

    // Draw Check
    int filled_box = 0;
    for (int i = 0; i < 9; i++)
    {
        if (board[i] == 'X' || board[i] == 'O')
            filled_box++;
    }
    if (filled_box == 9)
        return -1;
}

/*
 1 │ 2 │ 3
───┼───┼───
 4 │ 5 │ 6
───┼───┼───
 7 │ 8 │ 9
*/