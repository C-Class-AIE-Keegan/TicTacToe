/************
* Game State Header
* Base Class for all games states
* Keegan Miller | AIE | Tic Tac Toe
************/
#pragma once
#include <stdlib.h>
class GameState
{
public:

	GameState() {}			// Constructor
	~GameState() {}			// deconstructor

	
	virtual void Draw() { system("cls"); }			// Handles drawing of the game state
	virtual void Loop() { Draw(); }			// Handles looping of the game state

protected:

};

