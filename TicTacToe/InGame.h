/**********
* In Game Header
* Game State for when we are playing a match
* Keegan Miller | AIE | Tic Tac Toe
***********/
#pragma once
#include "GameState.h"
#include <string>
class InGame : public GameState
{
public:
#pragma region Constructor & Deconstructor

	// Constructors
	InGame();
	~InGame();


#pragma endregion


#pragma region Methods


	void Draw() override;			// Draws the state
	void Loop();			// Handles the main loop

	void AddObject(std::string const object, int const xPos, int const yPos);

#pragma endregion



protected:

private:
#pragma region Methods

	bool ValidatePlacement(int const xPos, int const yPos);
	void DrawGrid();


#pragma endregion

#pragma region Properties


	int playersTurn = 1;
	std::string grid[3][3];



#pragma endregion


	
};


