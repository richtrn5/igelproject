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

void Hedgehog::displayCHIP()
{
	if (color == 'R')
	{
		std::cout << RED << 'O' << RESET;

	}
	if (color == 'G')
	{
		std::cout << GREEN << 'O' << RESET;

	}
}

Hedgehog::~Hedgehog()
{
}


