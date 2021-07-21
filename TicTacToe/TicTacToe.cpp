// TicTacToe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Human.h"

int main()
{
	Human *human = new Human("Hello", "X");
	human->TakeTurn();
}

