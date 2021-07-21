#include "Human.h"
#include "InGame.h"
#include "GameManager.h"
#include <iostream>

/// <summary>
/// Allow Human input to place an object
/// </summary>
void Human::TakeTurn()
{
	char input;				// Declaration  for the input
	std::cin >> input;			// Get the user input
	InputLocation loc = GetInputLocation(input);			// Get the location of the input

	// Make sure that we can get the in game state, if so add the object to the grid
	if (InGame* const state = dynamic_cast<InGame*>(GameManager::GetCurrentGameState()))
	{
		state->AddObject(TicTacToeObject, loc.xPos, loc.yPos);
	}
}

/// <summary>
/// Gets the location to added the object to
/// </summary>
/// <param name="keyPressed">Key that was pressed</param>
/// <returns>The input location</returns>
InputLocation Human::GetInputLocation(char const keyPressed)
{
	InputLocation loc = InputLocation();
	int const ascii_value = (int)keyPressed;			// Change the char to an int
	if (ascii_value == 81 || ascii_value == 55 || ascii_value == 113)
	{
		loc.xPos = 0;
		loc.yPos = 0;
	}
	else if (ascii_value == 56 || ascii_value == 87 || ascii_value == 119)
	{
		loc.xPos = 0;
		loc.yPos = 1;
	}
	else if (ascii_value == 57 || ascii_value == 69 || ascii_value == 101)
	{
		loc.xPos = 0;
		loc.yPos = 2;
	}
	else if (ascii_value == 52 || ascii_value == 65 || ascii_value == 97)
	{
		loc.xPos = 1;
		loc.yPos = 0;
	}
	else if (ascii_value == 53 || ascii_value == 83 || ascii_value == 113)
	{
		loc.xPos = 1;
		loc.yPos = 1;
	}
	else if(ascii_value == 54 || ascii_value == 68 || ascii_value == 100)
	{
		loc.xPos = 1;
		loc.yPos = 2;
	}
	else if (ascii_value == 49 || ascii_value == 90 || ascii_value == 122)
	{
		loc.xPos = 2;
		loc.yPos = 0;
	}
	else if (ascii_value == 50 || ascii_value == 88 || ascii_value == 120)
	{
		loc.xPos = 2;
		loc.yPos = 1;
	}
	else if (ascii_value == 51 || ascii_value == 67 || ascii_value == 99)
	{
		loc.xPos = 2;
		loc.yPos = 2;
	}
	else
	{
		// #ERROR HANDLING#
		loc.xPos = 100;
		loc.yPos = 100;
	}
	

	return loc;
}

