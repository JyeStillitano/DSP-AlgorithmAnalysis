
// COS30008, Tutorial 12, 2020

#pragma once

#include "ArraySorter.h"

class BubbleSort : public ArraySorter
{
public:
    BubbleSort( const int aArrayOfNumbers[], size_t aArraySize );

    void sort( std::ostream& aOStream ) override;
};
