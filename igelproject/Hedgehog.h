//
//

#ifndef IGELPROJECT_HEDGEHOG_H
#define IGELPROJECT_HEDGEHOG_H
#include <string>
#include "Square.h"
using namespace std;
class Hedgehog: public Square{
public:
    string color;

private:
    void moveForward();
    void moveSide();
};


#endif //IGELPROJECT_HEDGEHOG_H
