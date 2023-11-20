#include "Player.h"
#include "Square.h"
#include <iostream>
#include <string>


Player::Player()
{
}

Player::Player(char color) : hedgehog_(color)
{
	//hedgehog_ = new Hedgehog[4];
}

//OLD
/*
void Player::giveHHchips()
{

		hedgehog_.setColor(color);
	
}
*/



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
	if (hedgehog_.getColor() == 'R')
	{
		colorWord = "Red";
		std::cout << colorWord << " " << RED << hedgehog_.getColor() << RESET;

	}
	if (hedgehog_.getColor() == 'G')
	{
		colorWord = "Green";
		std::cout << colorWord<< " " << GREEN << hedgehog_.getColor() << RESET;

	}

}

char Player::getHHcolor_player()
{
	return hedgehog_.getColor();
}

Hedgehog Player::placeHH()
{
	return hedgehog_;
}



