
// COS30008, Tutorial 12, 2020

#pragma once

#include "BubbleSort.h"

BubbleSort::BubbleSort(const int aArrayOfNumbers[], size_t aArraySize)
	:	ArraySorter(aArrayOfNumbers, aArraySize) 
{

}

void BubbleSort::sort(std::ostream& aOStream)
{
	int i, j;
	size_t size = getRange();
	for (int i = size - 1; i >= 1; i--) 
	{
		for (int j = 0; j <= i - 1; j++)
		{
			if (at(j) > at(j + 1)) { swapElements(j + 1, j); }
		}
		stepCompleted(aOStream);
	}
}
