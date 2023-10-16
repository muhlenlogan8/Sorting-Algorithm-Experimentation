#include "BubbleSort.h"

void bubbleSort(int arr[], int n)
{
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++)
    {
        swapped = false;
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);   // Swaps element and next element if element is larger than next element
                swapped = true;
            }
        }
 
        // If no two elements were swapped by inner loop, then break (sort is finished)
        if (swapped == false)
            break;
    }
}