#include "Player.h"
#include <iostream>


/// <summary>
/// Prints the players name & how many games they've won
/// </summary>
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
