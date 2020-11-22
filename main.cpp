/*
Ramamurthy Sundar 
main.cpp 

This is a tic tac toe command line interface.  There will be 2 players, player 1 and player 2;

The board will be composed of the numbers 1 - 9, and will look like this:
1 2 3
4 5 6
7 8 9

The basic goal of Tic Tac Toe is to get 3 of your tokens consecutively placed on the board either
diagonally, arross the row, or down the column.  

Player 1 will go first and will have the "X" token.  Player 2 will go second and will have the "O".

The first player to get 3 in a row wins!
*/

#include "class.h"

using namespace std;

int main() {

	//initialization of TicTacToe object and Board
	TicTacToe t;
	char arr[3][3] = { { '1','2','3' },{ '4','5','6' },{ '7','8','9' } };
	t.initializeBoard(arr);

	//introduction of game
	cout << "Welcome to TicTacToe CLI Edition!" << endl;
	cout << endl;

	//game begins here
	int count = 0;
	char move;
	while (count < 9) {
	
		//interface for player 1
		cout << "Player 1, enter a number from 1 to 9: " << endl;
		t.printBoard();
		cout << endl; cin >> move; cout << endl;
		t.setMove(move, 'X');
		count++
			
		//check whether there is a winner or not
		if (t.isWinner()) {
			cout << "Player 1 is the winner!" << endl;
			t.setWinner('1');
			break;
		}

		//case for when there is a tie
		if (count == 9) {
			cout << "Looks like we have a tie!" << endl;
			t.setWinner('T');
		break;
		}

		//interface for player 2
		cout << "Player 2, enter a number from 1 to 9: " << endl;
		t.printBoard();
		cout << endl; cin >> move; cout << endl;
		t.setMove(move, 'O');
		count++;

		//winner check for player 2
		if (t.isWinner()) {
			cout << "Player 2 is the winner!" << endl;
			t.setWinner('2');
			break; 
		}
	}




	return 0;
}
