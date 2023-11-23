#pragma once

#include "GameBoard.h"
#include "Hedgehog.h"
#include "Player.h"

class Game :
	public GameBoard// multiple inheritance
{
private:
	Player* players_;
	int num_players;
	const int numHH = 4;

	int totalHHingame;

	Hedgehog* allhedgehog_;

	int numDie;

public:
	Game();

	void play();
	// while loop initiates.. where the game starts

	// note to self: WHEN A PLAYER MOVES FORWARD, MAKE SURE IT IS JUST J + 1 AND PUSH TO THAT STACK


	void displayUpdate();
	// Display updated board after player's turn
	// should display all the squares that currently have a hedgehog

	void results();
	// Display final result of board and player winner

	void setPlayers(const int& numPlayers);
	// set players depending on number of players input in main.cpp

	void chooseHHogs();
	// have each created player choose a color R = red  G = green

	void placehhogs();
	// loop and choose 4 spots in gameboard pointer matrix (FIRST COLUMN) to PUSH hedgehog onto stack

	virtual void drawboard();

	bool checkLastCol();

	void rollDie();
	bool forward(int i);
};

