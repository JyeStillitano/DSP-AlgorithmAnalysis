// COS30008, Tutorial 12, 2020

#include "ArraySorter.h"

#include <stdexcept>
#include <algorithm>

using namespace std;

ArraySorter::ArraySorter( const int aArrayOfNumbers[], size_t aArraySize )
{
    // copy array into sorter
    fArrayOfNumbers = new int[aArraySize];

    for ( unsigned int i = 0; i < aArraySize; i++ )
    {
        fArrayOfNumbers[i] = aArrayOfNumbers[i];
    }
    
    fArraySize = aArraySize;
}

ArraySorter::~ArraySorter()
{
    // delete memory associated with array
    delete [] fArrayOfNumbers;
}

void ArraySorter::stepCompleted( ostream& aOStream )
{
    aOStream << "State: " << *this << endl; 
}

void ArraySorter::swapElements( size_t aSourceIndex, size_t aTargetIndex )
{
	if ( aSourceIndex < fArraySize && aTargetIndex < fArraySize ) 
	{
		swap( fArrayOfNumbers[aSourceIndex], fArrayOfNumbers[aTargetIndex] );
	}
	else
	{
		throw range_error( "Array index out of bounds." );
	}
}

const int& ArraySorter::at( size_t aIndex ) const
{
    if ( aIndex < fArraySize )
    {
        return fArrayOfNumbers[aIndex];
    }
    
    throw range_error( "Array index out of bounds." );
}

const size_t ArraySorter::getRange() const
{
    return fArraySize;
}

ostream& operator<<( ostream& aOStream, const ArraySorter& aObject )
{
    bool lFirst = true;
    
    aOStream << "[";

    for ( size_t i = 0; i < aObject.getRange(); i++ )
    {
        if ( lFirst )
        {
            lFirst = false;
        }
        else
        {
            aOStream << ", ";
        }

        aOStream << aObject.fArrayOfNumbers[i];
    }
    
    aOStream << "]";

    return aOStream;
}
