#include "SortingAlgorithms/BubbleSort.cpp"
#include "SortingAlgorithms/InsertionSort.h"
#include "SortingAlgorithms/MergeSort.h"
#include "SortingAlgorithms/QuickSort.h"
#include "SortingAlgorithms/RadixSort.h"
#include <gtest/gtest.h>

// Test if bubbleSort method works as intended
TEST(BubbleSort, TestSortWorks)
{
    int array[10] = {5,2,13,1,100,52,34,2,9933,23}; // Random array
    int sortedArray[10] = {1,2,2,5,13,23,34,52,100,9933};   // Above array sorted

    bubbleSort(array, 10);  // bubbleSort array

    for (int i = 0; i < 10; i++)
    {
        EXPECT_TRUE(array[i] == sortedArray[i]);    // Test if array equals arraySorted
    }

    for (int j = 1; j < 10; j++)
    {
        EXPECT_TRUE(array[j-1] < array[j] || array[j-1] == array[j]);   // Test if elements are in ascending order
    }
}

// Test if insertionSort method works as intended
TEST(InsertionSort, TestSortWorks)
{
    int array[10] = {5,2,13,1,100,52,34,2,9933,23}; // Random array
    int sortedArray[10] = {1,2,2,5,13,23,34,52,100,9933};   // Above array sorted

    insertionSort(array, 10);  // insertionSort array

    for (int i = 0; i < 10; i++)
    {
        EXPECT_TRUE(array[i] == sortedArray[i]);    // Test if array equals arraySorted
    }
    
    for (int j = 1; j < 10; j++)
    {
        EXPECT_TRUE(array[j-1] < array[j] || array[j-1] == array[j]);   // Test if elements are in ascending order
    }
}

// Test if mergeSort method works as intended
TEST(MergeSort, TestSortWorks)
{
    int array[10] = {5,2,13,1,100,52,34,2,9933,23}; // Random array
    int sortedArray[10] = {1,2,2,5,13,23,34,52,100,9933};   // Above array sorted

    mergeSort(array, 0, 9);  // mergeSort array

    for (int i = 0; i < 10; i++)
    {
        EXPECT_TRUE(array[i] == sortedArray[i]);    // Test if array equals arraySorted
    }
    
    for (int j = 1; j < 10; j++)
    {
        EXPECT_TRUE(array[j-1] < array[j] || array[j-1] == array[j]);   // Test if elements are in ascending order
    }
}

// Test if quickSort method works as intended
TEST(QuickSort, TestSortWorks)
{
    int array[10] = {5,2,13,1,100,52,34,2,9933,23}; // Random array
    int sortedArray[10] = {1,2,2,5,13,23,34,52,100,9933};   // Above array sorted

    quickSort(array, 0, 9);  // quickSort array

    for (int i = 0; i < 10; i++)
    {
        EXPECT_TRUE(array[i] == sortedArray[i]);    // Test if array equals arraySorted
    }
    
    for (int j = 1; j < 10; j++)
    {
        EXPECT_TRUE(array[j-1] < array[j] || array[j-1] == array[j]);   // Test if elements are in ascending order
    }
}

// Test if radixSort method works as intended
TEST(RadixSort, TestSortWorks)
{
    int array[10] = {5,2,13,1,100,52,34,2,9933,23}; // Random array
    int sortedArray[10] = {1,2,2,5,13,23,34,52,100,9933};   // Above array sorted

    radixSort(array, 10);  // radixSort array

    for (int i = 0; i < 10; i++)
    {
        EXPECT_TRUE(array[i] == sortedArray[i]);    // Test if array equals arraySorted
    }
    
    for (int j = 1; j < 10; j++)
    {
        EXPECT_TRUE(array[j-1] < array[j] || array[j-1] == array[j]);   // Test if elements are in ascending order
    }
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}