#include <iostream>
#include <string>
#include "GameBoard.h"
#include "Game.h"

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
    Game newgame;
    newgame.drawboard();

	//new methods added and being implemented
    cout << " how many players?? \n";
    cin >> players;
    newgame.setplayers(players);
    newgame.choosehhogs();
    newgame.placehhogs(); //working on this
    // display update after placing HH
    //newgame.displayUpdate(); // TESTING
    //newgame.play();
    //newgame.results();

    return 0;
}
