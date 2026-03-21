//LS, GP, tictac toe final game
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

void playing_Board(char board[3][3]) {
    printf("\n  0   1   2\n");
    printf("0 %c | %c | %c \n", board[0][0], board[0][1], board[0][2]);
    printf(" ---+---+---\n");
    printf("1 %c | %c | %c \n", board[1][0], board[1][1], board[1][2]);
    printf(" ---+---+---\n");
    printf("2 %c | %c | %c \n\n", board[2][0], board[2][1], board[2][2]);
}

int win(char board[3][3], char player) {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return 1;
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
            return 1;
    }
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return 1;
    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return 1;

    return 0;
}

void computer_turn(char board[3][3]) {
    int row, col;
    int available_spaces[9][2];
    int counter = 0;

    // Find all empty spaces
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (board[i][j] == ' ') { 
                available_spaces[counter][0] = i;
                available_spaces[counter][1] = j;
                counter++;
            }
        }
    }


    if (counter > 0) {
        int choice = rand() % counter;
        row = available_spaces[choice][0];
        col = available_spaces[choice][1];
        board[row][col] = 'O';
        printf("Computer chose [%d %d]\n", row, col);
    }
}

int main() {
    srand(time(NULL));

    char board[3][3] = {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}
    };

    char player = 'X';
    int row, col;

    for (int turn = 0; turn < 9; turn++) {

        if (player == 'X') {
            playing_Board(board);

            printf("Player %c, enter row sapce and column: ", player);

            if (scanf("%d %d", &row, &col) != 2) {
                printf("Invalid input! Try again.\n");
                while (getchar() != '\n'); // clear input buffer
                turn--;
                continue;
            }

            if (row < 0 || row > 2 || col < 0 || col > 2 || board[row][col] != ' ') {
                printf("That spot is already taken! Try again.\n");
                turn--;
                continue;
            }

            board[row][col] = 'X';
        } else {
            computer_turn(board);
        }

        // Show updated board after EVERY move
        playing_Board(board);

        // Check win
        if (win(board, player)) {
            if (player == 'X')
                printf("You win!\n");
            else
                printf("Computer wins womp womppp!\n");
            return 0;
        }

        // Switch player
        player = (player == 'X') ? 'O' : 'X';
    }

    playing_Board(board);
    printf("It's a tie!\n");

    return 0;
}
        


