#include "Game.h"
#include "Square.h"
#include <iostream>
using namespace std;
Game::Game() 
{
	createboard();
}

void Game::setplayers(int& numplayers) // make this an inline function
{
	numPlayers = numplayers;
	totalHHingame = numHH * numPlayers;

	players_ = new Player[numPlayers];
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
	for (int i = 0; i < numHH; i++) 
	{	// try just 1 player for now

		// HAVE PLAYER CHOOSE A ROW TO PLACE HEDGEHOG

		for (int j = 0; j<numPlayers; j++)
		{
			cout << "Player " << j+1 << " place your HedgeHog, enter row number (0-5): ";

			cin >> rowB;
			if (rowB > 5)
			{
				cout << "did you mean 5?\n";
				rowB = 5;
			}
			gameboard[rowB][0]->pushHH(hedgehog_[index]);
			displayUpdate();
			index++;
		}

	}
	index = 0;
	//drawboard(); // DO NOT USE THIS, BOARD RESETS

}


bool Game::checkLastCol() const
{
	for (int i = 0; i < 6; i++)
	{
		if (!(gameboard[i][8]->checkStackEmpty())) // if NOT empty
		{
			std::cout << "winnerwinner chicken dinner\n";
			return true;
			//break;
			
		}
		
	}
	return false; // if empty
}

void Game::play()
{
	//roll die
	std::srand(std::time(0)); // from assignment 2
	int num = 0;
	int index = 0;
	//displayUpdate();
	while (!checkLastCol()) // while last column is empty
	{
		for (int i = 0; i < numPlayers; i++)
		{
			std::cout << "PLAYER" << i+1 <<" TURN\n";
			//std::cout << "enter any num to continue WHILE LOOP\n";
			//cin >> num;
			//players_[i].moveHH(); this does not work... idk why

			rollDie();

			forward();

			displayUpdate();


		}
	}
	// initiate while loop
		// repeat until a hedgehog has been detected at the end of the row.
			// check each row in the last column ( when j = 8 ) if stack is NOT EMPTY
				// checkLastCol();
		

		// make each player move a hedgehog
			
			//players[i].moveHH();
		// display updated squares

}

void Game::displayUpdate() 
{
	for (int i = 0; i < numPlayers; i++)
	{
		cout << "Player " << i+1 << " : ";
		players_[i].displayPlayer();
		cout << " ";
	}
	cout << endl;
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
	// the winner is the specific color of hedgehog at the end of column
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

void Game::rollDie()
{
	numDie = 0; // testing first row
	//numDie = std::rand() % 6;
	//cout << "Number Rolled: " << numDie << endl;

}

void Game::forward()
{
	int num;
	//choose column in specific row (from die) to move forward
	std::cout << "MOVE FORWARD" << endl;
	cout << "choose column from row " << numDie << ":  ";
	cin >> num;

	gameboard[numDie][num + 1]->pushHH(gameboard[numDie][num]->getTop());
	gameboard[numDie][num]->popHH();

	//gameboard[numDie][num]->popHH();
	//gameboard[numDie][num]->;

}


