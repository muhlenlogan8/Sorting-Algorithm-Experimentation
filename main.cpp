#include <iostream>
#include <chrono>
#include "RunTimes.h"
#include "PrintTable.h"
typedef std::chrono::high_resolution_clock Clock;

int main()
{
    int randArraySize = 10; // Initialize array size (10, 100, 500, 5000, 25000)
    int randArray[randArraySize];   // Initialize array to be used

    // Add random elements to randArray to be sorted
    for(int n = 0; n < randArraySize; n++)
    {
        randArray[n] = rand() % (2 * randArraySize);
    }

    auto t1 = Clock::now(); // Take initial time prior to sort

    // Algorithms to be tested between the two times
    bubbleSort(randArray, randArraySize);
    // insertionSort(randArray, randArraySize);
    // mergeSort(randArray, 0, randArraySize-1);
    // quickSort(randArray, 0, randArraySize-1);
    // radixSort(randArray, randArraySize);

    auto t2 = Clock::now(); // Take time after sort

    // Subtract final time from initial time to get duration of time that was taken to sort the array
    std::cout << "Delta t2-t1: " << std::chrono::duration_cast<std::chrono::nanoseconds>(t2 - t1).count() << " nanoseconds" << std::endl;
    
    // RunTimes();
}