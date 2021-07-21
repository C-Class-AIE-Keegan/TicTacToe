/**********
* Game Manager CPP
* Handles all the game methods
* Keegan Miller | AIE | Tic Tac Toe
***********/

#include "GameManager.h"
#include "InGame.h"

// Static Variables declaretion
GameState* GameManager::currentGameState = new InGame();

/// <summary>
/// Changes the current game state
/// <summary>
void GameManager::ChangeGameState(GameState * state)
{
	currentGameState = state;
}
