//
//

#include "GameBoard.h"
#include "Square.h"
#include "BlackHole.h"
#include <iostream>

using namespace std;
GameBoard::GameBoard()
{
    game = new Square ** [row]; //6 rows type Square

    for (int i = 0; i < row; ++i) {
        game[i] = new Square*[col]; //9 columns type Square
    }
}

void GameBoard::drawboard()
{
    int charval{};

    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            bool blackholedetect = i == 0 && j == 3 || i == 1 && j == 6 || i == 2 && j == 4 ||
                                   i == 3 && j == 5 || i == 4 && j == 2 || i == 5 && j == 7;
            //for placement of each obstacle.. as accordingly to the physical board.

            // implement adding obstacle label here
            // if statement for detecting obstacle
            if (blackholedetect) {
                game[i][j] = new BlackHole;
                game[i][j]->setSquareLabel(i+1, 0);
            }
            else
            {
                game[i][j] = new Square;
                if (j == 0)
                    charval = 83; //S
                else if (j == 8) {
                    charval = 90-j; //Z (dec 90)
                }
                else
                    charval = 97; // b -> h
                game[i][j]->setSquareLabel(i,j+charval);
            }

            game[i][j]->setSquareCord(i,j);
            game[i][j]->display();
            cout << "  ";
        }
        cout << endl;
    }
}