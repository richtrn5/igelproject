//
//

#ifndef IGELPROJECT_SQUARE_H
#define IGELPROJECT_SQUARE_H

#include <string>
#include <stack>
#include <iostream>
#include "Hedgehog.h"

using std::cout, std::string;


class Square {

    string label;
    char board_label;
    int x_location;
    int y_location;
    stack<Hedgehog> chips;

public:
    //blank for creating square obj in gameboard
    Square();
    Square(int row, int col, char b_label);


    // displays boardlabel of current square on the gameboard
    virtual void displayBLabel() { cout << board_label; }


    // TODO remove this if not needed
    // mainly for feeding private data member to Hedgehog
    //string getLabel() { return label; }


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

    // return true if HH stack is empty
	bool checkStackEmpty() const { return chips.empty(); }
};


#endif //IGELPROJECT_SQUARE_H
