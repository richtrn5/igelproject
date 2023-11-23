
#ifndef IGELPROJECT_BLACKHOLE_H
#define IGELPROJECT_BLACKHOLE_H
#include "Square.h"

class BlackHole: public Square{

public:
    // construct blackhole and pass features to SQUARE object
    BlackHole(int i,int j, char blabel);

    virtual void displayBLabel();

    virtual void popHH();
    virtual void pushHH(const Hedgehog& hh);

    virtual void displayStackHH(); 

    virtual Hedgehog getTop();
};


#endif //IGELPROJECT_BLACKHOLE_H
