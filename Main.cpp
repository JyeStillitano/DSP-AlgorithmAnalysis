
// COS30008, Tutorial 12, 2020

#include "BubbleSort.h"
#include "FisherAndYatesSort.h"

#include <iostream>

using namespace std;

int main()
{
    int lArray[] = { 34, 2, 890, 40, 16, 218, 20, 49, 10, 29 };
    size_t lArrayLength = (size_t)(sizeof(lArray) / sizeof(int));
    
    cout << "Test Fisher&Yates sort:" << endl;

    FisherAndYatesSort lFisherAndYatesSorter( lArray, lArrayLength );
    cout << lFisherAndYatesSorter << endl;
    lFisherAndYatesSorter.sort( cout );

    cout << "Test bubble sort:" << endl;

    BubbleSort lBubbleSorter( lArray, lArrayLength );
    cout << lBubbleSorter << endl;
    lBubbleSorter.sort( cout );

    return 0;
}
