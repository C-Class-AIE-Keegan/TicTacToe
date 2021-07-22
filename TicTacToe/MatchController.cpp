#include "MatchController.h"
#include <iostream>

/// <summary>
/// Constructor to setup game
/// </summary>
/// <param name="p1">Player 1</param>
/// <param name="p2">Player 2</param>
/// <param name="num_of_rnds">How many rounds we are playing</param>
MatchController::MatchController(Player* const p1, Player* const p2, int num_of_rnds)
{
	if (p1 && p2)
	{
		Player1 = p1;
		Player2 = p2;

		// Debug
		int input;
		std::cout << "players valid" << std::endl;
		std::cin >> input;
	}
	else
	{
		// debug
		int input;
		std::cout << "Error!" << std::endl;
		std::cin >> input;
	}
	
	numOfRnds = num_of_rnds;
}

MatchController::~MatchController()
{
	delete Player1;
	delete Player2;
}

void MatchController::GameOver()
{
	// TODO: implement the game over screen that shows the winner
}
