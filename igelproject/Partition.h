#pragma once
#include "GameTable.h"

// partition points to each of the gametables depending on the current time slot. 
class Partition
{

	// points to existing gametable object
	GameTable* gtp;
	Partition* nextp;

public:
	Partition();

	// accessor functions (get/set)

	// should just set the next gametable within the time instance from TIMINGWHEEL
	void setGTP(GameTable* gtp2) { gtp = gtp2; }
	// for getting the address of the current gametable to call its play method from TIMINGWHEEL
	GameTable* getGTP() { return gtp; } // this is also a problem

	// have no idea what these would do...
	void setNP(Partition* nextp2) { nextp = nextp2; }
	Partition* getNP() { return nextp; } // this is a problem
};

