#pragma once
/*
 * Game Manager HEADER
 * Keegan Miller AIE | TIC TAC TOE
*/
#include "GameState.h"

class GameManager
{
public:
	static void ChangeGameState(GameState* state);

	/// <summary>
	/// Get the current game state we are in
	/// </summary>
	/// <return>The current game state</return>
	static GameState* GetCurrentGameState() { return currentGameState; }
private:
	static GameState* currentGameState;
};

