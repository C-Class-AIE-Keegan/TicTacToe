#pragma once
#include <string>
class Player
{
public:
#pragma region Constructors & Deconstructors

	/// <summary>
	/// Construtor for the player
	/// </summary>
	/// <param name="name">Name of the player</param>
	/// <param name="object">Tic Tac Toe Object</param>
	/// <param name="Human">(Default: true)_if this is human or AI</param>
	Player(std::string name, std::string object, bool human = true)
	{
		name = playersName;
		TicTacToeObject = object;
		isHuman = human;
	}

	
	~Player()
	{

	}


#pragma endregion

	

#pragma region Methods
	


	void DrawPlayerUI();			// Draws the players UI

	/// <summary>
	/// Called when the player has won the game
	/// It increments the amount of games the player has won
	/// </summary>
	inline void WonGame() { gamesWon++; }



#pragma endregion

#pragma region Abstract Methods


	virtual void TakeTurn() = 0;


#pragma endregion
	

	


#pragma region Properties


	std::string TicTacToeObject;			// Object to add


#pragma endregion

	
protected:
#pragma region Methods

#pragma endregion

#pragma region Properties

	std::string playersName;			// Name of the player
	int gamesWon = 0;						// How many games the player has won
	bool isHuman = true;


#pragma endregion


	
};

