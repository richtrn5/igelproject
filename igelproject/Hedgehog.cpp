#include "Hedgehog.h"
#include "Square.h"

Hedgehog::Hedgehog(char Color, int x, int y): Square(x,y) 
{
	label = getLabel();
}
