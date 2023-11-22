//
//

#ifndef IGELPROJECT_SQUARE_H
#define IGELPROJECT_SQUARE_H

#include <string>
#include <stack>
#include <iostream>

#include "Hedgehog.h"

using namespace std;

class Square {
private:
    string label;
    int xLocation;
    int yLocation;
    stack<Hedgehog> chips;

public:
    //blank for creating square obj in gameboard
    Square();
    Square(int row, int col);

    //setting private data
    virtual void setSquareLabel(string l);

    virtual void setSquareCord(int row, int col);

    // we can remove these actually



    // set square values
    // displays details or labels of current square on the gameboard
    virtual void display() { cout << label; }


    // mainly for feeding private data member to Hedgehog
    string getLabel() { return label; }


    /// FOR USING STACK IN GAMEBOARD
    // ex) gameboard[][] -> checkStackEmpty();
    virtual void popHH() { chips.pop(); }
    virtual void pushHH(const Hedgehog& hh) { chips.push(hh); }

    // display the ENTIRE stack
    virtual void displayStackHH();

    // return the TOP of stack
    virtual Hedgehog getTop() { return chips.top(); }

    // display the TOP of stack...
    // mainly for displaying on the gameboard
    void displayTopChip() { chips.top().displayCHIP(); }
    bool checkStackEmpty() { return chips.empty(); }
};


#endif //IGELPROJECT_SQUARE_H
