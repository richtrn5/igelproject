#include "TimingWheel.h"
#include <algorithm>

// set the maximum time indicated by the user.....
TimingWheel::TimingWheel() : curr_slot(0) 
{
	// Initialize slots
	for (int i = 0; i <= max_delay; ++i) {
		slot[i] = nullptr;
	}
}

// most important part
void TimingWheel::insert(int play_time, GameTable* p1)
{
	//slot.push_back()


	// Create a new Partition and link it to the next slots
	Partition* newPartition = new Partition();
	
	newPartition->setGTP(p1);

	for (int i = 0; i < play_time; ++i) {

		if (slot[curr_slot] == nullptr) {
			slot[curr_slot] = newPartition;
		}
		else {
			// Find the last Partition in the linked list and add the newPartition
			Partition* lastPartition = slot[curr_slot];
			//while (lastPartition->getNP() != nullptr) {
			//	lastPartition = lastPartition->getNP();
			//}
			//lastPartition->setNP(newPartition);
		}
	}

	// for pointing to the next gametable within the same curr_slot or time unit
	// so.. we are implementing Time Slot 0: [PTR -> GameTable1] ... [PTR -> GameTable2]
	// in respect to the part 3 description
	/*
	Partition* newPartition = new Partition();
	newPartition->setGTP(p1);
	newPartition->setNP(slot[curr_slot]->getNP());
	slot[curr_slot]->setNP(newPartition);
	*/
}

void TimingWheel::schedule()
{
	Partition* currentPartition = slot[curr_slot];
	while (currentPartition != nullptr) {
		GameTable* currentGameTable = currentPartition->getGTP();
		if (currentGameTable != nullptr) {
			// Call method related to playing the game
			currentGameTable->tablePlay();
		}
		currentPartition = currentPartition->getNP();
	}

	clear_curr_slot();
	increment_curr_slot();
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
