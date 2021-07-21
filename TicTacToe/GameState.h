#pragma once
#include <stdlib.h>
class GameState
{
public:

	GameState() {}			// Constructor
	~GameState() {}			// deconstructor

	
	virtual void Draw() { system("cls"); }			// Handles drawing of the game state
	virtual void Loop() = 0;			// Handles looping of the game state

protected:

};

