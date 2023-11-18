#include "Player.h"

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

//helper methods for move()
void rollDie()
{
	
}

void forward() 
{

}



void Player::moveHH()
{

}

Hedgehog Player::getHH(int& i)
{
	return hedgehog_[i];
}

