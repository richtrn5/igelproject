#include <iostream>
#include <string>
#include "GameBoard.h"
#include "Game.h"
#include "GameTable.h"
#include "TimingWheel.h"
//#include "Partition.h"


int main() {

    //2 gametable objects declared
    GameTable *test1;
    GameTable *test2;
    test1 = new GameTable;
    test2 = new GameTable;

    /*
    Partition *part;
    part = new Partition;
    part ->setGTP(test2);
    
    test2 = part->getGTP();
    test2->tablePlay();
    */
    
    
    TimingWheel task; //assuming 2 players max
    task.insert(3, test1); //pass reference of gametable for the pointer parameter with 3 time units
    //task.insert(4, &test2);
    for (int i = 0; i < max_delay; i++)
    {
        task.schedule();
    }

    
    return 0;
}
