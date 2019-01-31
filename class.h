/*
Ramamurthy Sundar
class.h

This is the header file for the TicTacToe class.  

*/
#pragma once

#include <iostream>

class TicTacToe
{
private:
	char board[3][3];
	char winner;

public:
	
	void initializeBoard(char arr[3][3]);
	void printBoard();
	void setMove(char move, char PlayerTag);
	bool isWinner();
	void setWinner(char PlayerTag);

};
