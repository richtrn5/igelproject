#pragma once
#include "Partition.h"
#include <vector>
using std::vector;
//const int max_delay{ 2 }; // maximum 6 players

class TimingWheel
{
	//Partition* slot[max_delay + 1];
	int max_delay;
	int curr_slot;
	vector<Partition> slot;

public:
	TimingWheel(int time);
	void insert(int play_time, GameTable* p1);
	void schedule();
	void clear_curr_slot();
	void increment_curr_slot() { curr_slot = (curr_slot + 1) % (max_delay + 1); }
};

