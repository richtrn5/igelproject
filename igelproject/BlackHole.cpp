//
//

#include "BlackHole.h"
#include "Square.h"

BlackHole::BlackHole(int i, int j, char blabel): Square(i,j,blabel) {

}



void BlackHole::displayBLabel() {
    Square::displayBLabel();
}

// NEW
void BlackHole::popHH()
{
    Square::popHH();
}

void BlackHole::pushHH(const Hedgehog& hh)
{
    Square::pushHH(hh);
}

void BlackHole::displayStackHH()
{
    Square::displayStackHH();
}

Hedgehog BlackHole::getTop()
{
    return Square::getTop();
}



