#include "Player.h"
#include <iostream>
#include <string>




Player::Player(const char color_c) : color(color_c),rank(0), hedgehog_(color_c)
{
	 
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

void Player::displayColorHH()
{
	if (hedgehog_.getColor() == 'R')
	{

		std::cout << RED << hedgehog_.getColor() << RESET;

	}
	if (hedgehog_.getColor() == 'G')
	{
		std::cout << GREEN << hedgehog_.getColor() << RESET;

	}
}

\



