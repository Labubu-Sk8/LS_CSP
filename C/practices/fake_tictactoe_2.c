


char board[3][3];




void Board() {
    char ch = '1';
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            board[i][j] = ch++;
}


void displayBoard() {
    printf("\n");
    for (int i = 0; i < 3; i++) {
        printf(" %c | %c | %c ", board[i][0], board[i][1], board[i][2]);
        if (i < 2) printf("\n---|---|---\n");
    }
    printf("\n\n");
}


int checkWin() {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2])
            return 1;
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i])
            return 1;
    }
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
        return 1;
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0])
        return 1;

    return 0;
}


int checkDraw() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i][j] != 'X' && board[i][j] != 'O')
                return 0;
    return 1;
}

int makeMove(int choice, char mark) {
    int row = (choice - 1) / 3;
    int col = (choice - 1) % 3;

    if (board[row][col] != 'X' && board[row][col] != 'O') {
        board[row][col] = mark;
        return 1;
    }
    return 0;
}


int findBestMove(char mark) {
    for (int i = 1; i <= 9; i++) {
        int row = (i - 1) / 3;
        int col = (i - 1) % 3;

        if (board[row][col] != 'X' && board[row][col] != 'O') {
            char temp = board[row][col];
            board[row][col] = mark;

            if (checkWin()) {
                board[row][col] = temp;
                return i;
            }

            board[row][col] = temp;
        }
    }
    return -1;
}


int computerMove() {
    int move;

    move = findBestMove('O');
    if (move != -1) return move;

    
    move = findBestMove('X');
    if (move != -1) return move;

   
    for (int i = 1; i <= 9; i++) {
        int row = (i - 1) / 3;
        int col = (i - 1) % 3;

        if (board[row][col] != 'X' && board[row][col] != 'O')
            return i;
    }

    return -1;
}

int main() {
    int choice;
    initializeBoard();

    while (1) {
        displayBoard();

       
        printf("Your move (1-9): ");
        scanf("%d", &choice);

        if (!makeMove(choice, 'X')) {
            printf("Invalid move! Try again.\n");
            continue;
        }

        if (checkWin()) {
            displayBoard();
            printf("🎉 You win!\n");
            break;
        }

        if (checkDraw()) {
            displayBoard();
            printf("It's a draw!\n");
            break;
        }


        int comp = computerMove();
        printf("Computer chooses: %d\n", comp);
        makeMove(comp, 'O');

        if (checkWin()) {
            displayBoard();
            printf("Computer wins!\n");
            break;
        }

        if (checkDraw()) {
            displayBoard();
            printf("It's a draw!\n");
            break;
        }
    }

    return 0;
}