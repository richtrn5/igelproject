//
// Created by Rich Tran on 11/10/23.
//

#include "Square.h"
#include <iostream>
#include <string>
#include "Hedgehog.h"
using namespace std;

Square::Square()
{

}
// add constructor for receiving row and col values ******
Square::Square(int row, int col) //this is for hedgehog
{
	
}



void Square::setSquareLabel(int row, char col) 
{
    if (col == 0){
        label = "Obs" + to_string(row);
    }
    else
        label = "T"+ to_string(row) + col;
}

void Square::setSquareCord(int row, int col) 
{
    xLocation = row;
    yLocation = col;
}


void Square::display() {
    cout << label;
}

string Square::getLabel()
{
    return label;
}


