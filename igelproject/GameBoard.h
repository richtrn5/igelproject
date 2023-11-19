//
//

#ifndef IGELPROJECT_GAMEBOARD_H
#define IGELPROJECT_GAMEBOARD_H

//#include <string>
#include "Square.h"

using namespace std;
class GameBoard{

private:

protected:
    Square*** gameboard;
    const int row = 6;
    const int col = 9;
public:
    GameBoard();
	void createboard();
    virtual void drawboard();
    // next time: change the design of the board..
    Square***& getGameboard() { return gameboard; }

    //display a text-based representation of the board

};



#endif //IGELPROJECT_GAMEBOARD_H
