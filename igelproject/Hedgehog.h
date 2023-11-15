#pragma once
#include <string>
#include "Square.h"
using namespace std;

class Hedgehog:
	public Square
{
private:
	string label;
	char color;
public:
	Hedgehog(char Color, int x, int y); //construct starting position of object hedgehog

	
};

// how could we associate the hedgehog (chips) with each square??

// create a hedgehog stack in SQUARE and push THIS there using Player