#include "Square.h"


Square::Square(){}

Square::Square(int row, int col, char b_label)
		: board_label(b_label), x_location(row), y_location(col){}


void Square::displayStackHH()
{
    stack<Hedgehog> tempHH = chips;
    char letterCol = y_location + 'a';
    if (!chips.empty()) //only display the existing stacks
    {
        cout << x_location << letterCol << ": ";
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





