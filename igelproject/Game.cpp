#include "Game.h"

#include <iostream>
using namespace std;
Game::Game() 
{

}

void Game::setplayers(int& numplayers) // make this an inline function
{
	numPlayers = numplayers;
	totalHHingame = numHH * numPlayers;

	players_ = new Player[numplayers];
	hedgehog_ = new Hedgehog[totalHHingame];
}

void Game::choosehhogs()
{
	int index = 0;
	char color;
	for (int i = 0; i < numPlayers; i++)
	{
		cout << "choose Color for player " << i+1 << "\nR for Red, G for Green: ";
		cin >> color;
		players_[i].setColor(color);

		players_[i].giveHHchips(); // set HH objects with 'color'

	}
	for (int i = 0; i < numHH; i++)
	{  //copy HH from each player to HERE
		for (int j = 0; j < numPlayers; j++)
		{
			hedgehog_[index] = players_[j].getHH(i); // call default assignment
			index++;
		}
	} 

	
}

void Game::placehhogs()
{
	// we want to use the hedgehog private VAR in game for ALL HH CHIPS
	// each index in hedgehog represents a different player
	// so that we could simply choose a position here

	int index = 0;
	int rowB;
	for (int i = 0; i < 1; i++) // until numHH
	{	// choose 2 chip positions FOR NOW

		// HAVE PLAYER CHOOSE A ROW TO PLACE HEDGEHOG
		//now lets work on the stack
		// push gameboard to GAME
		cout << "Player 1 place your HedgeHog, enter row number (0-5): ";
		cin >> rowB;
		gameboard[rowB][0]->pushHH(hedgehog_[index]);

		index++;
		cout << "Player 2 place your HedgeHog, enter row number (0-5): ";
		cin >> rowB;
		gameboard[rowB][0]->pushHH(hedgehog_[index]);

		index++;
	}

	displayUpdate();
	/*
	for (int i = 0; i < numHH; i++) // for each player's hedgehogs
	{
		for (int j =0; j < numPlayers; j++) // for each players (taking turns)
		{
			
		}
	}
	*/
}



void Game::play()
{
	
	// initiate while loop
		// repeat until a hedgehog has been detected at the end of the row.
			// check each row in the last column ( when j = 8 ) if stack is NOT EMPTY
				// checkLastCol();
		

		// make each player move a hedgehog
			
			//players[i].moveHH();
		// display updated squares
		displayUpdate();

}

void Game::displayUpdate()
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			
			gameboard[i][j]->displayStackHH();
		}
	}
}

void Game::results()
{

}

void Game::drawboard()
{
	GameBoard::drawboard();
	/*
	Square*** gameboard = getGameboard();
	for (int i = 0; i < row; i++)
	{
		gameboard[i][i]->display();

	}
	*/

}
