#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

#ifndef TICTAC_H
#define TICTAC_H

class TicTac{

public:

	// ***Instantiation***

	TicTac::TicTac(); // -> default constructor
	TicTac::~TicTac(); //-> deconstructor
	char TicTac::SetBoard(); //-> sets board to 0 for each value to start

	// ***Inputs & Regular Functions***

	void TicTac::Draw();// -> Draws board every time after input
	void TicTac::Input(int); //->either 1 or 2 for input for X and O
	void TicTac::CoinToss(); //->random 1 or 0 to decide order of X and O..returns int
	void TicTac::TogglePlayer(int);// -> Toggles between X and O based on 1 or 0

	// ***check for wins/ results***

	char TicTac::Win(); // -> did someone win? Return either X or O
	bool TicTac::BoardFull(); //->Let know if board is full and no wins->ie draw
	// this can be combined with charWin, or kept separately for cleaner code 

	// ***Accessors/ Mutators***
	void TicTac::getPlayer() const; // (may be const)
	void TicTac::getMatrix() const;// (may be const)
	void TicTac::setPlayer(char) const; //(may be const)
	void TicTac::setMatrix(char) const;// (may be const)



private:
	 char player; //(player 1 or 2)
	 char matrix[3][3]; // define matrix

};

#endif