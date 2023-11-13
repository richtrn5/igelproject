//
//

#ifndef IGELPROJECT_SQUARE_H
#define IGELPROJECT_SQUARE_H
#include <string>
//#include "GameBoard.h"

using namespace std;

class Square{
private:
    string label;
    int xLocation;
    int yLocation;
public:
    Square(); //blank for creating square array
    Square(int row, int col);
    virtual void setSquareLabel(int row, char col);
    virtual void setSquareCord(int row, int col);

    // set square values
    virtual void display();
    // displays details or labels of current square on the gameboard

};


#endif //IGELPROJECT_SQUARE_H
