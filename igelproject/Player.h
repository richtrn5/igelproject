#ifndef IGELPROJECT_PLAYER_H
#define IGELPROJECT_PLAYER_H

// https://iq.opengenus.org/print-text-in-color-in-c/

#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"

#include "Hedgehog.h"

using namespace std;
class Player{
private:
    char color;
    int rank;
    Hedgehog hedgehog_; //the type of hedgehog color in player
    //int numDie;
	
public:
    Player() = default;

    Player(char color_c); //initialize player with hedgehog color

    // asks specific player to move a hedgehog depending on where the die lands...
	// should only allow to choose a hedgehog based on the number landed.

	//void moveHH();

    void displayPlayer();

    // return Hedgehog object for STACKING specific player's HH
    Hedgehog placeHH() { return hedgehog_; } 

    char getHHcolorPlayer(){ return hedgehog_.getColor(); }
    void displayColorHH();
    
    //helper functions
};


#endif //IGELPROJECT_PLAYER_H
