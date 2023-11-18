
// https://iq.opengenus.org/print-text-in-color-in-c/

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"


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


void GameBoard::drawboard()
{
    int charval{};

    string title = "        IGEL ARGERN         \n";
    string hLine = "---------------------------------\n";
    cout << GREEN<<title << RED<<hLine << RESET;

    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
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
        }
        cout << endl;
    }
}




