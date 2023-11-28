#pragma once
#include "Partition.h"
#include <vector>
using std::vector;

const int max_delay{ 4 }; // maximum 4 players, so 4 time instances

class TimingWheel
{
	Partition* slot[max_delay + 1];
	int max_delay;
	int curr_slot;
	//vector<Partition*> slot; // create a vector slot of partition pointers

public:
	TimingWheel();
	// what else does insert do other than adding gametable to the time slot
	void insert(int play_time, GameTable* p1);
	
	// schedule should start the play() and record the result/statistics after the game finishes.
	// in other words, schedule the task depending on the current time unit / slot
	void schedule();

	void clear_curr_slot();
	// curr_slot assigned 0 when its remainder is 0 after incrementing (a wheel structure)
	void increment_curr_slot() { curr_slot = (curr_slot + 1) % (max_delay + 1); }
};

