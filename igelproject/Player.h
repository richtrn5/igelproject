#ifndef IGELPROJECT_PLAYER_H
#define IGELPROJECT_PLAYER_H
#include <string>

#include "Hedgehog.h"

using namespace std;
class Player{
private:
    char color; // R for Red.. G for Green
    int rank;
    Hedgehog* hedgehog_;
	
public:
    //void placehhog();
    Player(); // initialize hedgehog array
    void setColor(char& Color) { color = Color; }
    void giveHHchips();
    void setStart(int x, int y);
    void moveHH();
    // asks specific player to move a hedgehog depending on where the die lands...
    // should only allow to choose a hedgehog based on the number landed.

    Hedgehog getHH(int& i); // return Hedgehog object
};


#endif //IGELPROJECT_PLAYER_H
