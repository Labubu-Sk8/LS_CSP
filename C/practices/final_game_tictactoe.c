//LS, GP, tictac toe final game
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <stdbool.h>

void playing_Board(char board[3][3]) {
    printf("  0   1   2\n");
    printf("0 %c | %c | %c \n", board[0][0], board[0][1], board[0][2]);
    printf(" ---+---+---\n");
    printf("1 %c | %c | %c \n", board[1][0], board[1][1], board[1][2]);
    printf(" ---+---+---\n");
    printf("2 %c | %c | %c \n", board[2][0], board[2][1], board[2][2]);
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

void computer_turn(char board[3][3]){
    int row, colum;
    int available_spaces[9][2];
    int counter = 0;
    
    for(int spots = 0; spots < 3; spots++){
        for(int choices = 0; choices < 3; choices++){
            if(board[spots][choices] = ' '){
                available_spaces[counter][0] = spots;
                available_spaces[counter][1] = choices;
                counter++;
            }
        }

    }


    if (counter > 0){
        int choice = rand() % counter;
        row = available_spaces[choice][0];
        colum = available_spaces[choice][1];
        board[row][colum] = 'O';
        printf("Computer choice the spot [%d %d]\n", row, colum);

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
        playing_Board(board);
        

        if (player == 'X') {
            printf("Player %c, enter your move by type the row then a space and the the colum: ", player);
            scanf("%d %d", &row, &col);
            if (row < 0 || row > 2 || col < 0 || col > 2 || board[row][col] != ' ') {
                printf("That spot is taken! Try again.\n");
                turn--;
                continue;
            }
            board[row][col] = player;
        }else{
         
            computer_turn(board);
        }

        if (win(board, player)) { 
            playing_Board(board);
            if (player == 'X') {
                printf("Player %c wins!\n", player);
            } else {
                printf("Computer wins!\n");
            }
            return 0;
        }

     
         player = (player == 'X') ? 'O' : 'X'; 
    }

    playing_Board(board); 
    printf("It's a tie!\n");

    return 0;
}
        


