#pragma once
#include "Player.h"
#include "GameBoard.h"
class Game:
	public GameBoard
{
private:
	
public:
	void play();
	void displayUpdate();
	void results();
};

