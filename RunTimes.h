#include <iostream>
#include <chrono>
#include <vector>
#include "SortingAlgorithms/BubbleSort.h"
#include "SortingAlgorithms/InsertionSort.h"
#include "SortingAlgorithms/MergeSort.h"
#include "SortingAlgorithms/QuickSort.h"
#include "SortingAlgorithms/RadixSort.h"
#include "PrintTable.h"

typedef std::chrono::high_resolution_clock Clock;

void RunTimes();