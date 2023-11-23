#include "GameBoard.h"
#include "Square.h"
#include "BlackHole.h"
#include <iostream>


using namespace std;
GameBoard::GameBoard()
{
    //initiate 2d dynamic pointer here (polymorphism)
	// ptr -> ptr[6] -> ptr[9] -> SQUARE 
    gameboard = new Square ** [row]; //6 rows of pointers -> pointers

    for (int i = 0; i < row; ++i) {
        gameboard[i] = new Square*[col]; //9 column pointers -> object implementation
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
        gameboard[i][j]->displayBLabel(); // display square or obstacle
    }
}

void GameBoard::createboard()
{
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {

            //for placement of each obstacle.. as accordingly to the physical board.
            bool blackholedetect = i == 0 && j == 3 || i == 1 && j == 6 || i == 2 && j == 4 ||
                i == 3 && j == 5 || i == 4 && j == 2 || i == 5 && j == 7; // use this to add obstacles

        	// if statement for detecting obstacle & placing regular squares
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
            // add blank, X, or HH chip
            displayHHorSQ(i, j); 
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
        std::cout << " " << BLUE << colLabel << RESET << "  ";
    }
    std::cout << "\n";

}
