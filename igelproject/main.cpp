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

    int players;
    GameBoard newgame;
    newgame.drawboard();

	//new methods added and being implemented
    // cin >> players;
    //newgame.setplayers(players);
    //newgame.chhosehhogs();
    //newgame.placehhogs();
    //newgame.play();
    //newgame.results();

    return 0;
}
