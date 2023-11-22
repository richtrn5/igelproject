#ifndef IGELPROJECT_HEDGEHOG_H
#define IGELPROJECT_HEDGEHOG_H

// https://iq.opengenus.org/print-text-in-color-in-c/

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"

#include <string>

//#include "Square.h"
// DO NOT INCLUDE THIS

using namespace std;

class Hedgehog// the chips
{
private:
	string label;
	char color;
public:
	Hedgehog();
	Hedgehog(char Color); //construct the color of hedgehog
	void setColor(char Color);
	char& getColor();
	void displayHH();
	void displayCHIP();

	virtual ~Hedgehog();

	
};

#endif
// how could we associate the hedgehog (chips) with each square??

// create a hedgehog stack in SQUARE and push THIS there using Player