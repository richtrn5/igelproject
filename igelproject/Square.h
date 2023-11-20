//
//

#ifndef IGELPROJECT_SQUARE_H
#define IGELPROJECT_SQUARE_H

#include <string>
#include <stack>
#include "Hedgehog.h"

using namespace std;

class Square{
private:
    string label;
    int xLocation;
    int yLocation;
    stack<Hedgehog> chips; //new
    
public:
    Square(); //blank for creating square array
    Square(int row, int col);
    virtual void setSquareLabel(int row, char col);
    virtual void setSquareCord(int row, int col);

    // set square values
    virtual void display();
    // displays details or labels of current square on the gameboard

    string getLabel();
    // mainly for feeding private data member to Hedgehog

    /// FOR STACK
    
    virtual void popHH(); // remove top element of stack
    virtual void pushHH(const Hedgehog & hh); // push new element of type HEDGEHOG onto stack

    virtual void displayStackHH(); // display ENTIRE stack

    virtual Hedgehog getTop(); // displays top of STACK

    bool checkStackEmpty();
};


#endif //IGELPROJECT_SQUARE_H
