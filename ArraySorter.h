
// COS30008, Tutorial 12, 2020

#pragma once

#include <ostream>

class ArraySorter
{
private:
    int* fArrayOfNumbers;
    size_t fArraySize;
    
protected:
    
    // service member function to be called once a sorting step has been finished
    void stepCompleted( std::ostream& aOStream );
    
    // swap elements in the underlying array
    void swapElements( size_t aSourceIndex, size_t aTargetIndex );
    
public:
    // array sorter constructor
    ArraySorter( const int aArrayOfNumbers[], size_t aArraySize );

    // array sorter destructor
    virtual ~ArraySorter();
    
    // return array element at index
    const int& at( size_t aIndex ) const;

    // return size of underlying array
    const size_t getRange() const;
    
    // polymorphic sort function
    virtual void sort( std::ostream& aOStream ) =0;

    // output operator for array sorters
    friend std::ostream& operator<<( std::ostream& aOStream, const ArraySorter& aObject );
};
