#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

#ifndef TICTAC_H
#define TICTAC_H

class TicTac{


public:
	
	TicTac(); // default constructor
	~TicTac(); // destructor 

	void Draw(); // draw board
	void Input(); // ask for input
	void TogglePlayer(); // alternate between players
	char Win(); // check for win X or O
	bool BoardFull(); // check if board full

	//mutator
	void getPlayer() const;
	void getMatrix() const;

	//accessor
	void setPlayer(char) const;
	void setMatrix(char) const;

private:

	char player; // player 1 or 2
	char matrix[3][3]; // define matrix



};

#endif