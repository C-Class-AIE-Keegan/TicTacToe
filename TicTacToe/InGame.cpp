/**********
* In Game CPP
* Handles the methods for In Game state
* Keegan Miller | AIE | Tic Tac Toe
***********/

#include "InGame.h"
#include "GameManager.h"
#include <iostream>

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
	GameManager::GetCurrentMatch()->GetPlayer1()->DrawPlayerUI();
	GameManager::GetCurrentMatch()->GetPlayer2()->DrawPlayerUI();
	DrawGrid();
}

/// <summary>
/// Handles the main loop of the state
/// </summary>
void InGame::Loop()
{
	__super::Loop();

	// Players Turn
	if (playersTurn == 1)
	{
		GameManager::GetCurrentMatch()->GetPlayer1()->TakeTurn();
		
	}
	else
	{
		GameManager::GetCurrentMatch()->GetPlayer2()->TakeTurn();
	}
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

/// <summary>
/// Draws the Tic Tac Toe Grid
/// </summary>
void InGame::DrawGrid()
{
	std::cout << grid[0][0] << "|" << grid[0][1] << "|" << grid[0][2] << std::endl;
	std::cout << "--|--|--" << std::endl;
	std::cout << grid[1][0] << "|" << grid[1][1] << "|" << grid[2][2] << std::endl;
	std::cout << "--|--|--" << std::endl;
	std::cout << grid[2][0] << "|" << grid[1][1] << "|" << grid[2][2] << std::endl;
	std::cout << "--|--|--" << std::endl;
}
