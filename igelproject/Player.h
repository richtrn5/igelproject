#ifndef IGELPROJECT_PLAYER_H
#define IGELPROJECT_PLAYER_H
#include <string>

using namespace std;
class Player{
private:
    char color; // R for Red.. G for Green
    int rank;
	
public:
    void placehhog();

    void moveHH();
    // asks specific player to move a hedgehog depending on where the die lands...
    // should only allow to choose a hedgehog based on the number landed.
};


#endif //IGELPROJECT_PLAYER_H
