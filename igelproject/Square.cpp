//
// Created by Rich Tran on 11/10/23.
//

#include "Square.h"
#include <iostream>
#include <string>

#include "GameBoard.h"
#include "Hedgehog.h"
using namespace std;

Square::Square()
{

}
// add constructor for receiving row and col values ******
Square::Square(int row, int col) //this is for hedgehog
{

}


void Square::setSquareLabel(string l)
{
    label = l;
}

void Square::setSquareCord(int row, int col)
{ //change col to char
    xLocation = row;
    yLocation = col;
}





// change label to coordinates
void Square::displayStackHH()
{
    stack<Hedgehog> tempHH = chips;
    char letterCol = yLocation + 'a';
    if (!chips.empty()) //only display the existing stacks
    {
        cout << xLocation << letterCol << ": ";
        while (!tempHH.empty())
        {
            tempHH.top().displayHH();
            cout << " ";
            tempHH.pop();

        }
        //cout << chips.size();
        cout << endl;

    }
    else
    {
        //std::cout << "empty af";
    }
}





