/**********
* Match Controller Header
* Handles the current match
* Keegan Miller | AIE | Tic Tac Toe
***********/
#pragma once
#include "Player.h"
class MatchController
{
public:
	MatchController(Player* const p1, Player* const p2, int num_of_rnds);
	~MatchController();

#pragma region Methods


	inline void EndRound() { rndsPlayed++; }
	void GameOver();

#pragma endregion

#pragma region Getters & Setters
	inline Player* GetPlayer1() const { return Player1; }
	inline Player* GetPlayer2() const { return Player2; }
#pragma endregion


	
private:

#pragma region Properties


	Player* Player1;
	Player* Player2;

	int numOfRnds = 5;
	int rndsPlayed = 0;


#pragma endregion

	

};

