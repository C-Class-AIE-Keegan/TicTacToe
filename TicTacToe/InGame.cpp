#include "InGame.h"

InGame::InGame()
{
	for (int x = 0; x < 3; ++x)
	{
		for (int y = 0; y < 3; ++y)
		{
			grid[x][y] = " ";
		}
	}
}

InGame::~InGame()
{
}

/// <summary>
/// Handles the drawing of the state
/// </summary>
void InGame::Draw()
{
	__super::Draw();
}

/// <summary>
/// Handles the main loop of the state
/// </summary>
void InGame::Loop()
{
	__super::Loop();
}

/// <summary>
/// Adds the object to the grid if it's in a valid location
/// <summary>
/// <param name="object">TicTacToe Object (x/o)</param>
/// <param name="xPos">X position we want to add it to</param>
/// <param name="yPos">Y Position we want to add it to</param>
void InGame::AddObject(std::string const object, int const xPos, int const yPos)
{
	// Ensure we are placing in a valid location
	if (ValidatePlacement(xPos, yPos))
	{
		grid[xPos][yPos] = object;		// add the object
		// Switch the players turn
		if (playersTurn == 1)
		{
			playersTurn = 2;
		}
		else
		{
			playersTurn = 1;
		}

	}
}

/// <summary>
/// Checks we are entering the object into a valid location that 
/// hasn't been used yet or is within the grid
/// </summary>
/// <param name="xPos">X position we want to check</param>
/// <param name="yPos">Y position we want to check</param>
bool InGame::ValidatePlacement(int const xPos, int const yPos)
{
	if (xPos > 0 && xPos < 3 && yPos > 0 && yPos < 3)
	{
		if (grid[xPos][yPos] == "" || grid[xPos][yPos] == " ")
		{
			return true;
		}
	}
	return false;
}
