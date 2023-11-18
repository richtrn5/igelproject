#ifndef IGELPROJECT_HEDGEHOG_H
#define IGELPROJECT_HEDGEHOG_H

#include <string>
//#include "Square.h"
// DO NOT INCLUDE THIS
using namespace std;

class Hedgehog // the chips
{
private:
	string label;
	char color;
public:
	Hedgehog();
	Hedgehog(char Color, int x, int y); //construct starting position of object hedgehog
	void setColor(char Color);
	void display();
	//void getHH(int & i);
	//void setStart(int x, int y);

	
};

#endif
// how could we associate the hedgehog (chips) with each square??

// create a hedgehog stack in SQUARE and push THIS there using Player