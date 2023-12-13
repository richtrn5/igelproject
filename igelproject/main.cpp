#include <iostream>
#include <fstream>
#include <string>
#include "GameBoard.h"
#include "Game.h"
#include <string>
using std::string;
using std::ofstream;
using std::cout;
using std::cin;
//#include "Partition.h"

string user_input;
int end_of_simulation;

void get_user_input() 
{
    //open or create output file using ostream
    cout << "Type a value for end_of_simulation time: ";
    cin >> end_of_simulation;
    cout << "Type output file name with .txt file name extension: ";
    cin >> user_input;
    ofstream fout(user_input);
}

void print_status(string input, Game & curr_game)
{
    ofstream fout;
    fout.open(input);

    // show # of players
    fout << curr_game.getNumPlayers() << endl;
    // show the kind of obstacle used
    fout << curr_game.getObstacleName() << endl;
    // show the winning player and HH color
    
}


int main() {
    int simulation_time{0};

    int players;
    Game newgame;

    newgame.drawboard();

    get_user_input();
    print_status(user_input, newgame);

    //new methods added and being implemented
    cout << " how many players?? \n";
    //cin >> players;
    newgame.setPlayers(2);

    // each player will choose a color R or G in the terminal
    newgame.chooseHHogs();


    // will place HH until each player has placed 4 on the board
    newgame.placehhogs();

    // each player will play 1 round of the game
    // where they roll a die, and move a hedgehog forward
    // only move forward for now
    newgame.play();


    newgame.results();
    
    return 0;
}
