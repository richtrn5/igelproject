#include "Game.h"
#include "Square.h"
#include <iostream>
using namespace std;
Game::Game()
{
	createboard();
}

void Game::setPlayers(const int& n_players) // make this an inline function
{
	num_players = n_players;
	totalHHingame = numHH * num_players;

	players_ = new Player[num_players]; //initialize the pointer with a 1d array of objects Player
	//allhedgehog_ = new Hedgehog[totalHHingame]; // might just delete this
}

void Game::chooseHHogs()
{
	int index = 0;
	char color;
	for (int i = 0; i < num_players; i++)
	{
		cout << "choose Color for player " << i + 1 << "\nR for Red, G for Green: ";
		cin >> color;
		players_[i] = Player(color);
	}


}

void Game::placehhogs()
{
	// we want to use the hedgehog private VAR in game for ALL HH CHIPS
	// each index in hedgehog represents a different player
	// so that we could simply choose a position here

	//int index = 0;
	int rowB;
	for (int i = 0; i < numHH; i++) //loop for each HH in Player
	{

		// HAVE PLAYER CHOOSE A ROW TO PLACE HEDGEHOG

		for (int j = 0; j < num_players; j++) // counter for each player
		{
			drawboard();
			cout << "Player " << j + 1 << " place your ";
			players_[j].displayColorHH();
			cout << " HedgeHog, enter row number (0-5): ";

			cin >> rowB;
			if (rowB > 5)
			{
				cout << "did you mean 5?\n";
				rowB = 5;
			} /// HERE MAKE PLAYER CHOOSE AGAIN

			gameboard[rowB][0]->pushHH(players_[j].placeHH());
			std::cout << BLUE << "----------------------------------------\n\n" << RESET;
			displayUpdate();
		}

	}

	drawboard();
}


bool Game::checkLastCol()
{
	bool colstatus = false;
	for (int i = 0; i < row; i++)
	{
		if (!(gameboard[i][8]->checkStackEmpty())) // if NOT empty
		{
			std::cout << "winnerwinner chicken dinner\n";
			colstatus = true;
			//break;

		}

	}
	return colstatus; // if empty
}

void Game::play()
{
	//set die
	std::srand(std::time(nullptr)); // from assignment 2: (set rand seed by current time)
	int num = 0;
	int index = 0;
	//displayUpdate();
	while (!checkLastCol()) // while last column is empty
	{
		for (int i = 0; i < num_players; i++)
		{
			std::cout << "PLAYER" << i + 1 << " TURN\n";

			//std::cout << "enter any num to continue WHILE LOOP\n";
			//cin >> num;
			//players_[i].moveHH(); this does not work... idk why

			rollDie();

			forward(i);

			displayUpdate();

		}
	}
}

void Game::displayUpdate()
{
	for (int i = 0; i < num_players; i++)
	{
		cout << "Player " << i + 1 << " : ";
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
	for (int i = 0; i < row; i++) //check rows of last col
	{
		for (int pCNT = 0; pCNT < num_players; pCNT++) //check each player's HH color
		{
			if (!gameboard[i][8]->checkStackEmpty() && (gameboard[i][8]->getTop().getColor() == players_[pCNT].getHHcolorPlayer()))
			{
				cout << "WINNER IS PLAYER " << pCNT + 1;
			}
		}
	}
}

void Game::drawboard()
{
	GameBoard::drawboard();
}

void Game::rollDie()
{
	numDie = 1; // testing SPECIFIC row

	//numDie = std::rand() % 6;
	cout << "Number Rolled: " << numDie << endl;
}

// TODO somehow move this to Player
bool Game::forward(int i)
{
	int num;
	bool stay; // status for valid movement
	bool HHexist = false; //status for existing player's HH
	//choose column in specific row (from die) to move forward

	// TODO force player to repeat if INVALID action
	std::cout << "MOVE FORWARD" << endl;
	cout << "choose column from row " << numDie << ":  ";
	cin >> num;


	if (!gameboard[numDie][num]->checkStackEmpty()) // if square is not empty
	{
		gameboard[numDie][num + 1]->pushHH(gameboard[numDie][num]->getTop());
		gameboard[numDie][num]->popHH();

		// checking if hedgehog on the board matches with the player's *****(UNDER DEVELOPMENT)*****
		/*
			if (HHexist) // compare HH player's color
			{

				gameboard[numDie][num + 1]->pushHH(players_[i].placeHH());
				gameboard[numDie][num]->popHH();

			}
			else
			{
				std::cout << "moving other player's Hedgehog\n";
				gameboard[numDie][num + 1]->pushHH(gameboard[numDie][num]->getTop());
				gameboard[numDie][num]->popHH();
				//stay = true;
			}
			stay = false;
		*/
		stay = false;
	}


	else
	{
		cout << "no stack exists\n";
		stay = true;
		//return stay;
	}

	return stay;

}


