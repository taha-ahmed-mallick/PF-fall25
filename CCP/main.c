#include <stdio.h>
#include <windows.h>

char board[] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
int win_pos[3];

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
            printf("Invalid input by Player %d\n\tEnter again.", player);
        printf("\nPlayer %d [%c], enter position (1-9): ", player, mark);
        scanf("%d", &box);
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
                printf("Player %d Wins!!", player);
                return 0;
            }
            else if (status == -1)
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

void print_board(int status)
{
    system("cls");
    printf("\t┌────────────────┐\n");
    printf("\t│TIC TAC TOE GAME│\n");
    printf("\t└────────────────┘\n");
    for (int i = 0; i < 3; i++) {
        printf("\n\t    ");
        for (int j = 0; j < 3; j++) {
            printf("%c", board[j+i*3]);
            j!=2?printf(" │ "):0;
        }
        i!=2?printf("\n\t   ───┼───┼───"):0;
    }
    printf("\n");
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