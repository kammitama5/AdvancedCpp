#include "TicTac.h"


// default constructor
TicTac::TicTac(){
	char matrix[3][3] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
	char player = 'X';
}

// destructor
TicTac::~TicTac(){

}

//mutator
void TicTac::getPlayer() const{

}
void TicTac::getMatrix() const{

}

//accessor
void TicTac::setPlayer(char) const{
	//newplayer = player;
}
void TicTac::setMatrix(char) const{
	//newmatrix = matrix;
}

// Draw function to draw board
void TicTac::Draw()
{
	
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++)
		{
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

}

// Input from player
void TicTac::Input(){
	// takes number and returns and prints out X or O where player position decides in matrix
	int a;

	
	cout << "Press the number of the field: " << endl;
	cin >> a;

	
	if (a == 1){
		matrix[0][0] = player;
	}
	else if (a == 2){
		matrix[0][1] = player;
	}
	else if (a == 3){
		matrix[0][2] = player;
	}
	else if (a == 4){
		matrix[1][0] = player;
	}
	else if (a == 5){
		matrix[1][1] = player;
	}
	else if (a == 6){
		matrix[1][2] = player;
	}
	else if (a == 7){
		matrix[2][0] = player;
	}
	else if (a == 8){
		matrix[2][1] = player;
	}
	else if (a == 9){
		matrix[2][2] = player;
	}
	

}

// Player one vs Player two..even vs odds
void TicTac::TogglePlayer(){
	// toggles between X and O depending on player
	if (player == 'X'){
		player = 'O';
	}
	else
	{
		player = 'X';
	}
}

// check for win
// is board full and does it match any of patterns?
char TicTac::Win(){

	// checks to see if win
	//rows
	
	if (matrix[0][0] == 'X' && matrix[0][1] == 'X' && matrix[0][2] == 'X')
		return 'X';
	if (matrix[1][0] == 'X' && matrix[1][1] == 'X' && matrix[1][2] == 'X')
		return 'X';
	if (matrix[2][0] == 'X' && matrix[2][1] == 'X' && matrix[2][2] == 'X')
		return 'X';
	//columns
	if (matrix[0][0] == 'X' && matrix[1][0] == 'X' && matrix[2][0] == 'X')
		return 'X';
	if (matrix[0][1] == 'X' && matrix[1][1] == 'X' && matrix[2][1] == 'X')
		return 'X';
	if (matrix[0][2] == 'X' && matrix[1][2] == 'X' && matrix[2][2] == 'X')
		return 'X';

	//diagonals
	if (matrix[0][0] == 'X' && matrix[1][1] == 'X' && matrix[2][2] == 'X')
		return 'X';
	if (matrix[2][0] == 'X' && matrix[1][1] == 'X' && matrix[0][2] == 'X')
		return 'X';


	//second player
	//rows
	if (matrix[0][0] == 'O' && matrix[0][1] == 'O' && matrix[0][2] == 'O')
		return 'O';
	if (matrix[1][0] == 'O' && matrix[1][1] == 'O' && matrix[1][2] == 'O')
		return 'O';
	if (matrix[2][0] == 'O' && matrix[2][1] == 'O' && matrix[2][2] == 'O')
		return 'O';
	//columns
	if (matrix[0][0] == 'O' && matrix[1][0] == 'O' && matrix[2][0] == 'O')
		return 'O';
	if (matrix[0][1] == 'O' && matrix[1][1] == 'O' && matrix[2][1] == 'O')
		return 'O';
	if (matrix[0][2] == 'O' && matrix[1][2] == 'O' && matrix[2][2] == 'O')
		return 'O';

	//diagonals
	if (matrix[0][0] == 'O' && matrix[1][1] == 'O' && matrix[2][2] == 'O')
		return 'O';
	if (matrix[2][0] == 'O' && matrix[1][1] == 'O' && matrix[0][2] == 'O')
		return 'O';
	
	return '/';
}
