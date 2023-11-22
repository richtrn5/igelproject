#include "Square.h"


Square::Square(){}

Square::Square(int row, int col, char blabel)
		: boardlabel(blabel), xLocation(row), yLocation(col){}


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





