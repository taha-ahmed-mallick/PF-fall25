#include <stdio.h>
#include <windows.h>

char board[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
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
    SetConsoleOutputCP(CP_UTF8);
    int player = 1, box, flag = 0, status = 0;
    char mark = 'X';
    while (1)
    {
        print_board(status);
        mark = player == 1 ? 'X' : 'O';
        if (flag)
            printf("Invalid input by Player %d\n\tEnter again.\n", player);
        printf("Player %d [%c], enter position (1-9): ", player, mark);
        if (scanf("%d", &box) != 1)
        {
            while (getchar() != '\n');
            flag = 1;
            continue;
        }
        if (box < 1 || box > 9 || board[box - 1] != box + '0')
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
                printf("\tPlayer %d Wins!!\n", player);
                return 0;
            }
            else if (status == -1)
            {
                printf("\tThis is a draw...\n");
                return 0;
            }
        }
        flag = 0;
        player = player == 1 ? 2 : 1;
    }
    return 0;
}

void print_board(int status)
{
    system("cls");
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
    printf("\t┌────────────────┐\n");
    printf("\t│TIC TAC TOE GAME│\n");
    printf("\t└────────────────┘\n");
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    printf("\tPlayer 1: X ");
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
    printf("(Red)");
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    printf("\n\tPlayer 2: O");
    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    printf(" (Green)\n\n");
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    for (int i = 0; i < 3; i++)
    {
        printf("\n\t    ");
        for (int j = 0; j < 3; j++)
        {
            char mark = board[j + i * 3];
            if (mark == 'X')
                SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);
            else if (mark == 'O')
                SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
            for (int k = 0; k < 3; k++)
                if (win_pos[k] == j + i * 3)
                    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_INTENSITY);
            printf("%c", mark);
            SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
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