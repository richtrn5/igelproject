#include "GameTable.h"

void GameTable::tablePlay()
{
    // can only handle 2 players at the moment
    int players = 2;
    newgame.drawboard();


    //new methods added and being implemented
    cout << " how many players?? \n";
    //cin >> players;
    newgame.setPlayers(players);

    // each player will choose a color R or G in the terminal
    newgame.chooseHHogs();


    // will place HH until each player has placed 4 on the board
    newgame.placehhogs();

    // each player will play 1 round of the game
    // where they roll a die, and move a hedgehog forward
    // only move forward for now
    newgame.play();


    newgame.results();
}
