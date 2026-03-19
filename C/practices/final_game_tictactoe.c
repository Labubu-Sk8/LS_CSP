//LS, GP, tictac toe final game
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <stdbool.h>

void Tic_Board(char board[3][3]) {
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
                counter++
            }
        }

    }
}



int location_(int location){
    printf("Where do you want to place?\n");
    scanf("%d", &location);
};

int player_turns(board, turns, spaces_available){
    char combinations[][20] = {"row 1" == [[0][0], [0][1], [0][2]], "row 2" == [[1][0], [1][1], [1][2]], "row 3" == [[2][0], [2][1], [2][2]], "col 1" == [[0][0], [1][0], [2][0]], "col 2" == [[0][1], [1][1], [2][1]], "col 3" == [[0][2], [1][2], [2][2]], "diag 1" == [[0][0], [1][1], [2][2]], "diag 2" == [[2][0], [1][1], [0][2]]};
    while (true){
        if (turns % 2 == 0){
            char symbol_x = "X";
            location_ 
        }else{ 
            char symbol_o = "O";
            srand(time(NULL));
            int num = rand(1, 9);
            printf("Computer chose spot %d\n", location);
        };
    while (true){
        }if (location != spaces_available){
            print("Try again that spot is taken");
            continue
        }else if (location == 1){
            board[0][0] = symbol;
        } else if (location == 2){
            board[0][1] = symbol;
        }else if (location == 3){
            board[0][2] = symbol;
        }else if (location == 4){
            board[1][0] = symbol;
        }else if (location == 5){
            board[1][1] = symbol;
        }else if (location == 6){
            board[1][2] = symbol;
        }else if (location == 7){
            board[2][0] = symbol;
        }else if (location == 8){
            board[2][1] = symbol;
        }else{
            board[2][2] = symbol;}
        };
        return spaces_available, symbol, board;
    };

        return 0;
};

int main(){
    printf(Tic_Board);
    computer_turn;


    return 0;
}
        


