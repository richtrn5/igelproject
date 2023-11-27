#pragma once
#include "GameTable.h"
class Partition
{


	GameTable* gtp;
	Partition* nextp;

public:
	void setGTP();
	GameTable* & getGTP() { return gtp; }
	void setNP();
	Partition*& getNP() { return nextp; }
};

