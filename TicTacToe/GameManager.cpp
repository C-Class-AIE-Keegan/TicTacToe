#include "GameManager.h"

// Static Variables declaretion

/// <summary>
/// Changes the current game state
/// <summary>
void GameManager::ChangeGameState(GameState * state)
{
	currentGameState = state;
}
