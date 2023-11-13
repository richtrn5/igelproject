//
//

#ifndef IGELPROJECT_BLACKHOLE_H
#define IGELPROJECT_BLACKHOLE_H
#include "Square.h"

class BlackHole: public Square{
public:
    BlackHole();
    virtual void setSquareLabel(int row, char col);
    virtual void setSquareCord(int i, int j);
    virtual void display();
};


#endif //IGELPROJECT_BLACKHOLE_H
