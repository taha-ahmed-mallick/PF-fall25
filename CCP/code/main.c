#include <stdio.h>
#include <stdlib.h>
#ifdef _WIN32
#include <windows.h>
#endif

char board[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
//               0    1    2    3    4    5    6    7    8
//               49   50   51   52   53   54   55   56   57
int win_pos[] = {9, 9, 9};
int win_lines[8][3] = {
    {0, 1, 2}, // 1st row
    {3, 4, 5}, // 2nd row
    {6, 7, 8}, // 3rd row
    {0, 3, 6}, // 1st col
    {1, 4, 7}, // 2nd col
    {2, 5, 8}, // 3rd col
    {0, 4, 8}, // rht dig
    {2, 4, 6}  // lft dig
};

void print_board(int status);
int check_win();

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif
    int player = 1, box, flag = 0, status = 0;
    char mark;
    while (1)
    {
        print_board(status);
        mark = player == 1 ? 'X' : 'O';
        if (flag)
            printf("\033[1;35mInvalid input by Player %d\n\tEnter again.\033[0m\n", player);
        printf("\033[1mPlayer %d ", player);
        if (player == 1)
            printf("\033[31m[X]");
        else
            printf("\033[32m[O]");
        printf("\033[0m\033[1m, enter position (1-9): ");
        if (scanf("%d", &box) != 1) // char validation
        {
            while (getchar() != '\n');
            flag = 1;
            continue;
        }
        if (box < 1 || box > 9 || board[box - 1] != box + '0') // valid bounds + occupied box
        {
            flag = 1;
            continue;
        }
        board[box - 1] = mark;
        status = check_win();
        if (status)
        {
            print_board(status);
            if (status == 1)
            {
                printf("\033[1;36m\tPlayer %d Wins!!\n", player);
            }
            else if (status == -1)
            {
                printf("\033[1;33m\tThis is a draw...\n");
            }
            printf("\033[0m");
            char choice = 'y';
            do
            {
                if (choice != 'y')
                    printf("Enter valid input.\n");
                printf("\nPlay again? (y/n): ");
                scanf(" %c", &choice);
            } while (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N');

            if (choice == 'y' || choice == 'Y')
            {
                for (int i = 0; i < 9; i++)
                    board[i] = '1' + i;
                for (int i = 0; i < 3; i++)
                    win_pos[i] = 9;

                player = 1;
                status = 0;
                flag = 0;
                continue;
            }
            else
                return 0;
        }
        flag = 0;
        while (getchar() != '\n'); // float validation
        player = player == 1 ? 2 : 1;
    }
    return 0;
}

void print_board(int status)
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
    printf("\t\033[1;34m┌────────────────┐\n");
    printf("\t│TIC TAC TOE GAME│\n");
    printf("\t└────────────────┘\033[0m\n");
    printf("\t\033[1mPlayer 1: \033[1;31mX (RED)\033[0m");
    printf("\n\t\033[1mPlayer 2: \033[1;32mO (Green)\033[0m\n\n");
    for (int i = 0; i < 3; i++)
    {
        printf("\033[1m\n\t    ");
        for (int j = 0; j < 3; j++)
        {
            char mark = board[j + i * 3];
            if (mark == 'X')
                printf("\033[31m");
            else if (mark == 'O')
                printf("\033[32m");
            if (status)
                for (int k = 0; k < 3; k++)
                    if (win_pos[k] == j + i * 3)
                        printf("\033[4;34m");
            printf("%c\033[0m\033[1m", mark);
            j != 2 ? printf(" │ ") : 0;
        }
        i != 2 ? printf("\n\t   ───┼───┼───") : 0;
    }
    printf("\n\n");
    /*
    i j -> n
    0 0 -> 0
    0 1 -> 1
    0 2 -> 2
    1 0 -> 3
    1 1 -> 4
    1 2 -> 5
    2 0 -> 6
    2 1 -> 7
    2 2 -> 8
    n = j + i*3
    */
}

int check_win()
{
    // Win Check
    for (int i = 0; i < 8; i++)
    {
        int pos1 = win_lines[i][0];
        int pos2 = win_lines[i][1];
        int pos3 = win_lines[i][2];
        if (board[pos1] == board[pos2] && board[pos2] == board[pos3])
        {
            win_pos[0] = pos1;
            win_pos[1] = pos2;
            win_pos[2] = pos3;
            return 1;
        }
    }

    // Draw Check
    int filled_box = 0;
    for (int i = 0; i < 9; i++)
    {
        if (board[i] == 'X' || board[i] == 'O')
            filled_box++;
    }
    if (filled_box == 9)
        return -1;
    return 0; // continue as normal
}

/*
 1 │ 2 │ 3
───┼───┼───
 4 │ 5 │ 6
───┼───┼───
 7 │ 8 │ 9
*/