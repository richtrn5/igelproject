//
//

#include "BlackHole.h"
#include "Square.h"

BlackHole::BlackHole() {

}

void BlackHole::setSquareLabel(int row, char col) {
    Square::setSquareLabel(row, col);

}

void BlackHole::setSquareCord(int i, int j) {
    Square::setSquareCord(i, j);
}

void BlackHole::display() {
    Square::display();
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



