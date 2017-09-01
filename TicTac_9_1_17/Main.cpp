#include <iostream>
#include "TicTac.h"

using namespace std;

int main(){

	char matrix[3][3] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
	char player = 'X';

	// I have a weird bug where you have to enter twice to get it to input 
	// just for the first time

	cout << "Welcome to Tic Tac Toe" << endl;

	TicTac game1;
	game1.Draw();

	
	
	// size 3 x 3 matrix

	while (1)
	{
		game1.Input();
		game1.Draw();
		if (game1.Win() == 'X')
		{
			cout << "X wins!" << endl;
			break;
		}
		else if (game1.Win() == 'O'){
			cout << "O wins!" << endl;
		}

		game1.TogglePlayer();
	}







	system("PAUSE");
	return 0;
}

// draw board 
// input player (alternate players => even and odd)
// check for win 