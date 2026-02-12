#LS and YV tictactoe computer game

import random

def won(board):
    combinations = [[0,1,2], [3,4,5], [6,7,8], [0,3,6], [1,4,7],[2,5,8],[0,4,8],[2,4,6]]
    for combo in combinations:
        if board[combo[0]] == board[combo[1]] == board[combo[2]] and board[combo[0]] != " ":
            return board[combo[0]]
    return None
def print_board(board):
    print(f" {board[0]} | {board[1]} | {board[2]} ")
    print("---+---+---")
    print(f" {board[3]} | {board[4]} | {board[5]} ")
    print("---+---+---")
    print(f" {board[6]} | {board[7]} | {board[8]} ")

def player_turns(board, turns, spaces_available):
    combinations = {"row 1": [0,1,2], "row 2": [3,4,5], "row 3": [6,7,8], "col 1": [0,3,6], "col 2": [1,4,7], "col 3": [2,5,8], "diag 1": [0,4,8], "diag 2": [2,4,6]}
    while True:
        if turns % 2 == 0:
            symbol = "X"
            location = int(input("Where do you want to place?\n"))
        else: 
            symbol = "O" 
            location = random.randint(1,9)
            print(f"Computer chose spot {location}")
        if location not in spaces_available:
            print("Try again that spot is taken")
            continue
        if location == 1:
            board[0] = symbol
        if location == 2:
            board[1] = symbol
        if location == 3:
            board[2] = symbol
        if location == 4:
            board[3] = symbol
        if location == 5:
            board[4] = symbol
        if location == 6:
            board[5] = symbol
        if location == 7:
            board[6] = symbol
        if location == 8:
            board[7] = symbol
        if location == 9:
            board[8] = symbol
        spaces_available.remove(location)
        return spaces_available, symbol
board = [" "] * 9 
spaces_available = [1,2,3,4,5,6,7,8,9]
turns = 0
print("Welcome to tic-tac-toe")
print("You're X and the computer is O, beat your opponent and enjoy!")
print_board(board)
while True:
    spaces_available, current_player = player_turns(board, turns, spaces_available)
    turns += 1
    player_turns == 1
    print_board(board)
    winner = won(board)
    if winner:
        if winner == "X":
            print("You Won!")
        if winner == "O":
            print("UH OH looks like the computer won :(")
        if winner == " ":
            print("Looks like its a tie")
        again = input("Would you like to play again?(yes/no)\n").strip().lower()
        if again == "yes":
            print_board(board)
            
        if again == "no":
            print("Thanks for playing tic-tac-toe!")
                