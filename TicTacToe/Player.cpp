/**********
* Player CPP
* Contains a method to draw the UI for all players
* Keegan Miller | AIE | Tic Tac Toe
***********/
#include "Player.h"
#include <iostream>


void Player::DrawPlayerUI()
{
	std::cout << playersName << ":";			// Print players name

	// Loop through the amount of games the player has won & print a line
	for (int i = 0; i < gamesWon; ++i)
	{
		std::cout << " | ";
	}

	std::cout << std::endl;			// end line
}
