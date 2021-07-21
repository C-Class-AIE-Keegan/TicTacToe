#pragma once
#include "GameState.h"
#include <string>
class InGame : public GameState
{
public:
	// Constructors
	InGame();
	~InGame();

	// Methods
	void Draw() override;			// Draws the state
	void Loop();			// Handles the main loop

	void AddObject(std::string const object, int const xPos, int const yPos);

	// Properties
protected:

private:
	// Methods
	bool ValidatePlacement(int const xPos, int const yPos);		// Ensures the placement is valid
	int playersTurn = 1;


	// Properties
	std::string grid[3][3];
};


