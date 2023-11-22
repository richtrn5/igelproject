

#ifndef IGELPROJECT_GAMEBOARD_H
#define IGELPROJECT_GAMEBOARD_H


// https://iq.opengenus.org/print-text-in-color-in-c/

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"

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

    // creating & displaying gameboard
	void createboard();
    virtual void drawboard();

	Square***& getGameboard() { return gameboard; }

    //check empty square
    void displayHHorSQ(int i, int j);

    //display a text-based representation of the board

    //virtual ~GameBoard() { delete[] gameboard; }
};

#endif //IGELPROJECT_GAMEBOARD_H
