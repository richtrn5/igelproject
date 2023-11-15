//
//

#ifndef IGELPROJECT_GAMEBOARD_H
#define IGELPROJECT_GAMEBOARD_H

#include <string>
#include "Square.h"

using namespace std;
class GameBoard{

private:
    const int row = 6;
    const int col = 9;
    Square *** gameboard;

public:
    GameBoard();
    void drawboard();

    //display a text-based representation of the board

};



#endif //IGELPROJECT_GAMEBOARD_H
