/*
 * Game Manager HEADER
 * Handles & runs the entire game
 * Keegan Miller AIE | TIC TAC TOE
*/
#pragma once
#include "GameState.h"
#include "MatchController.h"
#include "Human.h"

class GameManager
{
public:
#pragma region Constructors & Deconstructors

	GameManager() 
	{
		Human* p1 = new Human("John", "X");
		Human* p2 = new Human("Peter", "O");

		currentMatch = new MatchController(p1, p2, 5);
	}
	~GameManager();

#pragma endregion

#pragma region Methods
	static void Loop();
	static void ChangeGameState(GameState* state);

	// TODO: Exit Game

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
	static bool gameRunning;
	static GameState* currentGameState;
	static MatchController* currentMatch;

#pragma endregion

	
};

