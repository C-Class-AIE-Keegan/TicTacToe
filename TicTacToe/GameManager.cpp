/**********
* Game Manager CPP
* Handles all the game methods
* Keegan Miller | AIE | Tic Tac Toe
***********/

#include "GameManager.h"
#include "InGame.h"

// Static Variables declaretion
GameState* GameManager::currentGameState = new InGame();
MatchController* GameManager::currentMatch = nullptr;
bool GameManager::gameRunning = true;

GameManager::~GameManager()
{
	delete GameManager::currentGameState;
}

void GameManager::Loop()
{
	while (gameRunning)
	{
		currentGameState->Loop();
	}
}

/// <summary>
/// Changes the current game state
/// <summary>
void GameManager::ChangeGameState(GameState * state)
{
	currentGameState = state;
}
