#include "Player.h"
#include "Square.h"
#include <iostream>
#include <string>
Player::Player()
{
	hedgehog_ = new Hedgehog[4];
}


void Player::giveHHchips()
{
	for (int i = 0; i<4;i++)
	{
		hedgehog_[i].setColor(color);
	}
}

void Player::setStart(int x, int y)
{
	//
}


/*
void Player::moveHH()
{
	rollDie();
	forward();
}
*/

void Player::displayPlayer()
{
	string colorWord;
	if (color == 'R')
	{
		colorWord = "Red";
		std::cout << colorWord << " " << RED << color << RESET;

	}
	if (color == 'G')
	{
		colorWord = "Green";
		std::cout << colorWord<< " " << GREEN << color << RESET;

	}

}

Hedgehog Player::getHH(int& i)
{
	return hedgehog_[i];
}

