#ifndef IGELPROJECT_PLAYER_H
#define IGELPROJECT_PLAYER_H

// https://iq.opengenus.org/print-text-in-color-in-c/

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#include <string>

#include "GameBoard.h"
#include "Hedgehog.h"

using namespace std;
class Player: public GameBoard{
private:
    char color; // R for Red.. G for Green
    int rank;
    Hedgehog* hedgehog_; //
    int numDie;
	
public:
    //void placehhog();
    Player(); // initialize hedgehog array
    void setColor(char& Color) { color = Color; }
    void giveHHchips();
    void setStart(int x, int y);
    void moveHH();
    void displayPlayer();
    // asks specific player to move a hedgehog depending on where the die lands...
    // should only allow to choose a hedgehog based on the number landed.
    
    Hedgehog getHH(int& i); // return Hedgehog object

    //helper functions
 
};


#endif //IGELPROJECT_PLAYER_H
