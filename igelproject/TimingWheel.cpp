#include "TimingWheel.h"
#include <algorithm>

// set the maximum time indicated by the user.....
TimingWheel::TimingWheel(int time) : max_delay(time), curr_slot(0), slot(time + 1)
{
	
}

// create for loop in main that inserts the partition
void TimingWheel::insert(int play_time, GameTable* p1)
{

}

void TimingWheel::schedule()
{
}

void TimingWheel::clear_curr_slot()
{
	int index;
	if (curr_slot >= 0 && curr_slot < slot.size())
	{
		std::iter_swap(slot.begin() + curr_slot, slot.end() - 1);
		slot.pop_back();
	}
}
