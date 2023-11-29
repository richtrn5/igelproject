#include "TimingWheel.h"
#include <algorithm>

// set the maximum time indicated by the user.....
TimingWheel::TimingWheel() : curr_slot(0) 
{
	// Initialize slots
	for (int i = 0; i < max_delay + 1; i++) 
	{
		//set each pointer as nullptr
		slot[i] = nullptr;
	}
	//slot = new Partition[max_delay + 1];
	
	
	
}

// most important part
void TimingWheel::insert(int play_time, GameTable* p1)
{
	/*
	Partition* temp;
	temp = new Partition;
	temp->setGTP(p1);
	*/
	// pass the play time where game should end and send the result... even if no one wins
	slot[curr_slot] = new Partition(play_time);
	slot[curr_slot]->setGTP(p1);

	// for pointing to the next gametable within the same curr_slot or time unit
	// so.. we are implementing Time Slot 0: [PTR -> GameTable1] ... [PTR -> GameTable2]
	// in respect to the part 3 description
	/*
	Partition* newPartition = new Partition();
	newPartition->setGTP(p1);
	newPartition->setNP(slot[curr_slot]->getNP());
	slot[curr_slot]->setNP(newPartition);
	*/

	// the partition class acts as a package, where it can either open or receive.
	// so it just points at the address
}

void TimingWheel::schedule()
{
	//play each table through the slot until play_time has been reached
	if(slot[curr_slot] != nullptr)
	{
		GameTable* temp;
		temp = slot[curr_slot]->getGTP();
		temp->tablePlay();
		//clear_curr_slot();
		increment_curr_slot();
	}

}

void TimingWheel::clear_curr_slot()
{
	int index;

	// swap then pop the end of vector
	/*
	if (curr_slot >= 0 && curr_slot < slot.size())
	{
		std::iter_swap(slot.begin() + curr_slot, slot.end() - 1);
		slot.pop_back(); 
	}
	*/
}
