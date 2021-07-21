/*
 * Game Manager HEADER
 * Handles & runs the entire game
 * Keegan Miller AIE | TIC TAC TOE
*/
#pragma once
#include "GameState.h"
#include "MatchController.h"

class GameManager
{
public:
#pragma region Constructors & Deconstructors

	GameManager() {}
	~GameManager();

#pragma endregion

#pragma region Methods

	static void ChangeGameState(GameState* state);

#pragma endregion

#pragma region Getters & Setters

	/// <summary>
	/// Get the current game state we are in
	/// </summary>
	/// <return>The current game state</return>
	static GameState* GetCurrentGameState() { return currentGameState; }

	/// <summary>
	/// Get the current match
	/// </summary>
	/// <returns>The current match</returns>
	static MatchController* GetCurrentMatch() { return currentMatch; }


#pragma endregion

private:
#pragma region Properties

	static GameState* currentGameState;
	static MatchController* currentMatch;

#pragma endregion

	
};

