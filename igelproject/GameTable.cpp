#include "GameTable.h"

void GameTable::tablePlay()
{
    newgame.drawboard();


    //new methods added and being implemented
    cout << " how many players?? \n";
    cin >> players;
    newgame.setPlayers(players);
    newgame.chooseHHogs();
    newgame.placehhogs(); //working on this
    // display update after placing HH
    //newgame.displayUpdate(); // TESTING
    newgame.play();
    newgame.results();
}
