#include "Hedgehog.h"
#include "Square.h"
#include <iostream>
Hedgehog::Hedgehog()
{
	
}

Hedgehog::Hedgehog(char Color, int x, int y)
{

}

void Hedgehog::setColor(char Color)
{
	color = Color;
	std::cout << color << std::endl;
}

void Hedgehog::display()
{
	std::cout << color;
}


