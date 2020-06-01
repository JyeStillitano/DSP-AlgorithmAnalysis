#pragma once

#include "FisherAndYatesSort.h"
#include <ctime>

FisherAndYatesSort::FisherAndYatesSort(const int aArrayOfNumbers[], size_t aArraySize)
	: ArraySorter(aArrayOfNumbers, aArraySize)
{
	srand((unsigned int)time(NULL));
}

void FisherAndYatesSort::shuffle()
{
	int n, k;
	n = getRange();
	while (n > 1)
	{
		k = rand() % n;
		n--;
		swapElements(n, k);
	}
}

void FisherAndYatesSort::sort(std::ostream& aOStream)
{
	bool isSorted = false;
	while(!isSorted)
	{
		isSorted = true;
		shuffle();
		for (int i = 0; i < getRange() - 1; i++) 
		{
			if (at(i) > at(i + 1)) { isSorted = false; }
		}
		stepCompleted(aOStream);
	}
}