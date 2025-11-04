#include <stdio.h>
#include <stdlib.h>
#ifdef _WIN32
#include <windows.h>
#endif

// int win_pos[] = {9, 9, 9};
// int win_lines[8][3] = {
//     {0, 1, 2}, // 1st row
//     {3, 4, 5}, // 2nd row
//     {6, 7, 8}, // 3rd row
//     {0, 3, 6}, // 1st col
//     {1, 4, 7}, // 2nd col
//     {2, 5, 8}, // 3rd col
//     {0, 4, 8}, // rht dig
//     {2, 4, 6}  // lft dig
// };

void print_board(int status, int size, char board[size][size], int win_pos[size][2]);
int check_win(int size, char board[size][size], int win_lines[2 * size + 2][size][2], int win_pos[size][2]);
void init_board(int size, char board[size][size], int win_lines[2 * size + 2][size][2], int win_pos[size][2])
{
    // Initializing the board
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            board[i][j] = '-';
    // Setting Win Lines
    // winning rows
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
        {
            win_lines[i][j][0] = i;
            win_lines[i][j][1] = j;
        }
    // winning cols
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
        {
            win_lines[size + i][j][0] = j;
            win_lines[size + i][j][1] = i;
        }
    // main diag
    for (int i = 0; i < size; i++)
    {
        win_lines[2 * size][i][0] = win_lines[2 * size][i][1] = i;
    }
    // anti diag
    for (int i = 0; i < size; i++)
    {
        win_lines[2 * size + 1][i][0] = i;
        win_lines[2 * size + 1][i][1] = size - i - 1;
    }
    // Setting Win Positions
    for (int i = 0; i < size; i++)
    {
        win_pos[i][0] = -1;
        win_pos[i][1] = -1;
    }
}
void clear_buffer()
{
    while (getchar() != '\n')
        ;
}

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);
#endif
    int player = 1, box, flag = 0, status = 0, size, row, col;
    char mark = 'X';
    do
    {
        printf("Enter the size of board (3-5): ");
        if (scanf("%d", &size) != 1)
            clear_buffer();
    } while (size < 3 || size > 5);
    clear_buffer();
    char board[size][size];
    int win_lines[2 * size + 2][size][2];
    int win_pos[size][2];
    init_board(size, board, win_lines, win_pos);
    while (1)
    {
        print_board(status, size, board, win_pos);
        mark = player == 1 ? 'X' : 'O';
        if (flag)
            printf("\033[1;35mInvalid input by Player %d\n\tEnter again.\033[0m\n", player);
        printf("\033[1mPlayer %d ", player);
        if (player == 1)
            printf("\033[31m[X]");
        else
            printf("\033[32m[O]");
        printf("\033[0m\033[1m, enter position (%d%d-%d%d): ", 1, 1, size, size);
        if (scanf("%d", &box) != 1) // char validation
        {
            clear_buffer();
            flag = 1;
            continue;
        }
        row = box / 10;
        col = box % 10;
        row--, col--;
        if (row < 0 || row > size - 1 || col < 0 || col > size - 1 || board[row][col] != '-') // valid bounds + occupied box
        {
            flag = 1;
            continue;
        }
        board[row][col] = mark;
        status = check_win(size, board, win_lines, win_pos);
        if (status)
        {
            print_board(status, size, board, win_pos);
            if (status == 1)
            {
                printf("\033[1;36m\tPlayer %d Wins!!\n", player);
            }
            else if (status == -1)
            {
                printf("\033[1;33m\tThis is a draw...\n");
            }
            printf("\033[0m");
            return 0;
            // char choice = 'y';
            // do
            // {
            //     if (choice != 'y')
            //         printf("Enter valid input.\n");
            //     printf("\nPlay again? (y/n): ");
            //     scanf(" %c", &choice);
            // } while (choice != 'y' && choice != 'Y' && choice != 'n' && choice != 'N');

            // if (choice == 'y' || choice == 'Y')
            // {
            //     for (int i = 0; i < 9; i++)
            //         // board[i] = '1' + i;
            //         for (int i = 0; i < 3; i++)
            //             win_pos[i] = 9;

            //     player = 1;
            //     status = 0;
            //     flag = 0;
            //     continue;
            // }
            // else
            //     return 0;
        }
        flag = 0;
        clear_buffer(); // float validation
        player = player == 1 ? 2 : 1;
    }
    return 0;
}

void print_board(int status, int size, char board[size][size], int win_pos[size][2])
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
    for (int i = 0; i < size; i++)
    {
        printf("\033[1m\n\t");
        size == 3 ? printf("   ") : size == 4 ? printf("  ")
                                              : 0;
        for (int j = 0; j < size; j++)
        {
            char mark = board[i][j];
            if (mark == 'X')
                printf("\033[31m");
            else if (mark == 'O')
                printf("\033[32m");
            if (status)
                for (int k = 0; k < size; k++)
                    if (win_pos[k][0] == i && win_pos[k][1] == j)
                        printf("\033[34m");
            if (mark != '-')
            {
                printf(" ");
                printf("%c\033[0m\033[1m", mark);
            }
            else
                printf("%d%d", i + 1, j + 1);
            j != size - 1 ? printf(" │") : 0;
        }
        if (i != size - 1)
        {
            printf("\n\t");
            size == 3 ? printf("   ") : size == 4 ? printf("  ")
                                                  : 0;
            printf("───");
            for (int i = 1; i < size; i++)
                printf("┼───");
        }
    }
    printf("\n\n");
}

int check_win(int size, char board[size][size], int win_lines[2 * size + 2][size][2], int win_pos[size][2])
{
    // Win Check
    for (int i = 0; i < 2 * size + 2; i++)
    {
        int pos[size][2], match = 1;
        for (int j = 0; j < size; j++)
        {
            pos[j][0] = win_lines[i][j][0];
            pos[j][1] = win_lines[i][j][1];
        }
        if (board[pos[0][0]][pos[0][1]] == '-')
            continue;
        for (int j = 0; j < size - 1; j++)
            if (board[pos[j][0]][pos[j][1]] != board[pos[j + 1][0]][pos[j + 1][1]])
                match = 0;
        if (match)
        {
            for (int j = 0; j < size; j++)
            {
                win_pos[j][0] = pos[j][0];
                win_pos[j][1] = pos[j][1];
            }
            return 1;
        }
    }

    // Draw Check
    int unfilled_box = 0;
    for (int i = 0; i < size; i++)
        for (int j = 0; j < size; j++)
            if (board[i][j] == '-')
                unfilled_box++;
    if (unfilled_box == 0)
        return -1;
    return 0; // continue as normal
}

// /*
//  1 │ 2 │ 3
// ───┼───┼───
//  4 │ 5 │ 6
// ───┼───┼───
//  7 │ 8 │ 9
// */