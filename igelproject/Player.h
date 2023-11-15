// Should configure the players, which will

#ifndef IGELPROJECT_PLAYER_H
#define IGELPROJECT_PLAYER_H
#include <string>


using namespace std;
class Player {
private:
    char color; // R for Red.. G for Green
    int rank;
	
public:
    virtual void placehhog();
};


#endif //IGELPROJECT_PLAYER_H
