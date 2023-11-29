#pragma once

#include "GameBoard.h"
#include "Hedgehog.h"
#include "Player.h"
#include <typeinfo>

class Game :
	public GameBoard, public Player// multiple inheritance
{
private:
	Player* players_;
	int num_players;
	const int numHH = 4;
	int numDie;

public:

	// just calls createboard() when instance is created, which initiates the gameboard[][] pointer matrix with Squares
	Game();


	// while loop initiates.. where the game starts
	// note to self: WHEN A PLAYER MOVES FORWARD, MAKE SURE IT IS JUST J + 1 AND PUSH TO THAT STACK
	void play();


	// Display updated board after player's turn
	// should display all the squares that currently have a hedgehog
	void displayUpdate();

	// Display final result of board and player winner
	void results();


	// set players depending on number of players input in main.cpp
	void setPlayers(const int& numPlayers);

	// have each created player choose a color R = red  G = green
	void chooseHHogs();

	// loop and choose 4 spots in gameboard pointer matrix (FIRST COLUMN) to PUSH hedgehog onto stack
	void placehhogs();

	// calls the drawboard() derived from GameBoard, which just displays the board on terminal
	virtual void drawboard();

	// for play()
	bool checkLastCol();
	void rollDie();
	bool forward(int i);

	// for printing results to output file
	const char* getObstacleName() { return typeid(*gameboard[0][3]).name(); }
	const int getNumPlayers() { return num_players; }
};

