//
//

#ifndef IGELPROJECT_GAMEBOARD_H
#define IGELPROJECT_GAMEBOARD_H

#include <string>
#include "Square.h"

using namespace std;
class GameBoard: public Square{
private:
    const int row = 6;
    const int col = 9;
    Square *** game;
    // Think that Square needs to be the Parent...

    // use these values to specify size of matrix of type Square*...
public:
    GameBoard();
    void drawboard();
    // prints the board

    void rolldice();
    // 

    //display a text-based representation of the board

};



#endif //IGELPROJECT_GAMEBOARD_H
