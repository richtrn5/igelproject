#pragma once
#include "Partition.h"

const int max_delay{ 8 };

class TimingWheel
{
	Partition* slot[max_delay + 1];
	int curr_slot;
public:
	TimingWheel();
	void insert(int play_time, GameTable* p1);
	void schedule();
	void clear_curr_slot();
	void increment_curr_slot() { curr_slot = (curr_slot + 1) % (max_delay + 1); }
};

