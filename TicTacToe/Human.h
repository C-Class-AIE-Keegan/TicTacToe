/**********
* Human Header
* Controller for the human player
* Keegan Miller | AIE | Tic Tac Toe
***********/

#pragma once
#include "Player.h"

struct InputLocation
{
	int xPos;
	int yPos;
};

class Human : public Player
{
public:
#pragma region Constructors & Deconstructrs

	Human(std::string const name, std::string const object) : Player(name, object) {}
	~Human() {}

#pragma endregion

#pragma region Methods

	void TakeTurn();
	InputLocation GetInputLocation(char const keyPressed);

#pragma endregion

private:
	
};

