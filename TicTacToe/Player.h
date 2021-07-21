#pragma once
#include <string>
class Player
{
public:
	// Constructors
	Player(std::string name, std::string object)
	{
		name = playersName;
	}

	~Player()
	{
		
	}

	// Methods
	void DrawPlayerUI();			// Draws the players UI

	/// <summary>
	/// Called when the player has won the game
	/// It increments the amount of games the player has won
	/// </summary>
	inline void WonGame() { gamesWon++; }

	// Properties
	std::string TicTacToeObject;			// Object to add
protected:
	// Methods


	// Properties
	std::string playersName;			// Name of the player
	int gamesWon = 0;						// How many games the player has won
};

