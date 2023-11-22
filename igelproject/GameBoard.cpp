

#include "GameBoard.h"
#include "Square.h"
#include "BlackHole.h"
#include <iostream>


using namespace std;
GameBoard::GameBoard()
{
    //initiate 2d dynamic pointer here (polymorphism)
    gameboard = new Square ** [row]; //6 rows type Square

    for (int i = 0; i < row; ++i) {
        gameboard[i] = new Square*[col]; //9 columns type Square
    }
}

void GameBoard::displayHHorSQ(int i, int j)
{
    if(!gameboard[i][j]->checkStackEmpty())
    {
        gameboard[i][j]->displayTopChip(); // display the circle
    }
    else
    {
        gameboard[i][j]->displayB_label(); // display square or obstacle
    }
}

void GameBoard::createboard()
{
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            bool blackholedetect = i == 0 && j == 3 || i == 1 && j == 6 || i == 2 && j == 4 ||
                i == 3 && j == 5 || i == 4 && j == 2 || i == 5 && j == 7; // use this to add obstacles
            // pass this into function

            //for placement of each obstacle.. as accordingly to the physical board.

            // implement adding obstacle label here
            // if statement for detecting obstacle
            if (blackholedetect) {
                gameboard[i][j] = new BlackHole(i,j,'x');
            }
            else
            {
                gameboard[i][j] = new Square(i,j,' ');
            }
        }
    }
}

void GameBoard::drawboard()
{
    int charval{};

    cout << " START                            ZIEL\n" << RESET;


    for (int i = 0; i < row; ++i) {
        std::cout << " ";
        for (int j = 0; j < col; ++j) {
            // Print horizontal line
            std::cout << "+---";
        }
        std::cout << "+\n";
        std::cout << BLUE << i << RESET;

        for (int j = 0; j < col; ++j) {
            // Print vertical line and cell content.. the display();
            std::cout << "| ";
        	//gameboard[i][j]->display();
            displayHHorSQ(i, j); // add blank, X, or HH chip
            std::cout << " ";
        }
        std::cout << "|\n";
    }
    std::cout << " ";
    for (int j = 0; j < col; ++j) {
        std::cout << "+---";
    }
    std::cout << "+\n";

    std::cout << "  ";
    for (int j = 0; j < col; ++j) {
        const char colLabel = 'a' + j;

        //cout << static_cast<int>(('a'));
        std::cout << " " << BLUE << colLabel << RESET << "  ";
    }
    std::cout << "\n";

}



/*
for (int i = 0; i < row; ++i) {
    cout << i << "   ";

    for (int j = 0; j < col; ++j) {
        gameboard[i][j]->display();
        cout << "   "; // space the columns

    }

    cout << endl;
}
std::cout << "     ";
for (int j = 0; j < col; ++j)
{
    std::cout << j << "     ";
}
cout << endl;
*/


/*
bool blackholedetect = i == 0 && j == 3 || i == 1 && j == 6 || i == 2 && j == 4 ||
                       i == 3 && j == 5 || i == 4 && j == 2 || i == 5 && j == 7;
//for placement of each obstacle.. as accordingly to the physical board.

// implement adding obstacle label here
// if statement for detecting obstacle
if (blackholedetect) {
    gameboard[i][j] = new BlackHole;
    gameboard[i][j]->setSquareLabel(i+1, 0);
}
else
{
    gameboard[i][j] = new Square;
    if (j == 0)
        //using ASCII dec values
        charval = 83; //S
    else if (j == 8) {
        charval = 90-j; //Z (dec 90)
    }
    else
        charval = 97; // b -> h
    gameboard[i][j]->setSquareLabel(i,j+charval);
}

gameboard[i][j]->setSquareCord(i,j);
gameboard[i][j]->display();
cout << "  "; // space the columns
*/


