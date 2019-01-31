/*
Ramamurthy Sundar
class.cpp

This is the implementation of class.h

*/

#include "class.h"

using namespace std;

//initialze board array from main
void TicTacToe::initializeBoard(char arr[3][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			board[i][j] = arr[i][j];
		}
	}
}

//prints board 
void TicTacToe::printBoard() {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << board[i][j] << " ";
		}
		cout << endl;
	}
}


//sets the move of the player on the board
void TicTacToe::setMove(char move, char PlayerTag){
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			//We are making the assumption that the move is valid, since the function isValid will 
			//verify the move
			if (board[i][j] == move) {
				board[i][j] = PlayerTag;
			}
		}
		
	}
}

//checks to see whether a player has recieved a 3 in a row
bool TicTacToe::isWinner() {
	//case 1: downward diagnol
	if (board[0][0] == board[1][1] && board[0][0] == board[2][2]) return true;
	//case 2: upward diagnol
	else if (board[2][0] == board[1][1] && board[2][0] == board[0][2]) return true;
	//case 3: left side
	else if (board[0][0] == board[1][0] && board[0][0] == board[2][0]) return true;
	//case 4: right side
	else if (board[0][2] == board[1][2] && board[0][2] == board[2][2]) return true;
	//case 5: top side
	else if (board[0][0] == board[0][1] && board[0][0] == board[0][2]) return true;
	//case 6: bottom side
	else if (board[2][0] == board[2][1] && board[2][0] == board[2][2]) return true;
	//case 7: middle side to side
	else if (board[1][0] == board[1][1] && board[1][0] == board[1][2]) return true;
	//case 8: middle top to bottom
	else if (board[0][1] == board[1][1] && board[0][1] == board[2][1]) return true;
	//case 9: no matches
	else return false;
	
}

void TicTacToe::setWinner(char PlayerTag) {
	winner = PlayerTag;
}


