#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);  // number of test cases

    while (t--) {
        char board[8][8];

        // input the 8x8 board
        for (int i = 0; i < 8; i++) {
            for (int j = 0; j < 8; j++) {
                scanf(" %c", &board[i][j]);
            }
        }

        // find the bishop position
        for (int i = 1; i < 7; i++) {
            for (int j = 1; j < 7; j++) {
                if (board[i-1][j-1] == '#' &&
                    board[i-1][j+1] == '#' &&
                    board[i+1][j-1] == '#' &&
                    board[i+1][j+1] == '#') {
                    printf("%d %d\n", i+1, j+1);
                }
            }
        }
    }
    return 0;
}