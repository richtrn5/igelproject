#include "Hedgehog.h"
#include "Square.h"
#include <iostream>
Hedgehog::Hedgehog()
{
	
}

Hedgehog::Hedgehog(char Color)
{
	color = Color;
}

//OLD
/*
void Hedgehog::setColor(char Color)
{
	color = Color;
	//std::cout << color << std::endl;
}
*/

char& Hedgehog::getColor()
{
	return color;
}


void Hedgehog::displayHH()
{
	if (color == 'R')
	{
		std::cout << RED << color << RESET;

	}
	if (color == 'G')
	{
		std::cout << GREEN << color << RESET;

	}
}


