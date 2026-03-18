//LS, GP, tictac toe final game
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <stdbool.h>

char print_board(board){
    printf(" {board[0]} | {board[1]} | {board[2]}");
    printf(" ---+---+---");
    printf("{board[3]} | {board[4]} | {board[5]}");
    printf(" ---+---+---");
    printf("{board[6]} | {board[7]} | {board[8]}");


};




// checking win for rows
int check_win(){
    for(int i = 0; i < 3; i++){
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]){
            return 1;
        }
    }
}
int check_win_2(){
    
}

int location(){
        printf("Where do you want to place?\n");
        scanf("%d", &location);   
    }

int player_turns(board, turns, spaces_available){
    char combinations[][20] = {"row 1" == [0,1,2], "row 2" == [3,4,5], "row 3" == [6,7,8], "col 1" == [0,3,6], "col 2" == [1,4,7], "col 3" == [2,5,8], "diag 1" == [0,4,8], "diag 2" == [2,4,6]};
    while (true){
        if (turns % 2 == 0){
            char symbol_x = "X";
        }else{ 
            char symbol_o = "O";
            srand(time(NULL));
            int num = rand(1, 9);
            printf("Computer chose spot %d", location);
        }if location != spaces_available{
            print("Try again that spot is taken");
            continue 
        }if location == 1{
            board[0] = symbol
        }if location == 2{
            board[1] = symbol
        }if location == 3:{
            board[2] = symbol
        }if location == 4{
            board[3] = symbol
        }if location == 5{
            board[4] = symbol
        }if location == 6{
            board[5] = symbol
        }if location == 7{
            board[6] = symbol
        }if location == 8{
            board[7] = symbol
        }if location == 9{
            board[8] = symbol};
        spaces_available.remove(location)
        return spaces_available, symbol;
    };

        return 0;
};

int main(){
    print_board;


    return 0;
}
        


