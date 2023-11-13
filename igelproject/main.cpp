#include <iostream>
#include <string>
#include "GameBoard.h"

using namespace std;

void gameTest()
{
    const int row = 6;
    const int col = 9;
    string horizontal = "   -------------------------------------\n";
    cout <<  horizontal;
}


int main() {

    //gameTest();
    GameBoard newgame;
    newgame.drawboard();
    return 0;

}
