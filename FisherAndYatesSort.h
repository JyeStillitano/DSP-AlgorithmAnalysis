
// COS30008, Tutorial 12, 2020

#pragma once

#include "ArraySorter.h"

class FisherAndYatesSort : public ArraySorter
{
private:
    
    void shuffle();
    
public:
    FisherAndYatesSort( const int aArrayOfNumbers[], size_t aArraySize );
    
    void sort( std::ostream& aOStream ) override;
};

