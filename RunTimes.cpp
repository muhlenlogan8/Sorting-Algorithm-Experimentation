#include "RunTimes.h"

// Function that runs through all sorting algorithms with the number of array elements variations to then utilize printTable function
// to print complete table of all times for all sorting algorithms for variations of number of array elements.
void RunTimes()
{
    int arraySizeList[5] = {10, 100, 500, 5000, 25000};
    vector<int> randVector, vecBSTimes, vecISTimes, vecMSTimes, vecQSTimes, vecRSTimes;
    int arrBSTimes[5], arrISTimes[5], arrMSTimes[5], arrQSTimes[5], arrRSTimes[5];
    auto t1 = Clock::now();
    auto t2 = Clock::now();

    for (int l = 0; l < 5; l++)
    {
        randVector.clear();
        for(int n = 0; n < arraySizeList[l]; n++)
        {
            randVector.push_back(rand() % (2 * arraySizeList[l]));
        }

        for (int m = 1; m <= 5; m++)
        {
            auto t1 = Clock::now();
            auto t2 = Clock::now();

            int randArray[randVector.size()];
            std::copy(randVector.begin(), randVector.end(), randArray);
            switch (m)
            {
                case 1:
                    t1 = Clock::now();
                    bubbleSort(randArray, arraySizeList[l]);
                    t2 = Clock::now();
                    vecBSTimes.push_back(std::chrono::duration_cast<std::chrono::nanoseconds>(t2 - t1).count());
                    if (vecBSTimes[l] < 0)
                    {
                        vecBSTimes[l] = -1 * vecBSTimes[l];
                    }
                    break;
                case 2:
                    t1 = Clock::now();
                    insertionSort(randArray, arraySizeList[l]);
                    t2 = Clock::now();
                    vecISTimes.push_back(std::chrono::duration_cast<std::chrono::nanoseconds>(t2 - t1).count());
                    if (vecISTimes[l] < 0)
                    {
                        vecISTimes[l] = -1 * vecISTimes[l];
                    }
                    break;
                case 3:
                    t1 = Clock::now();
                    mergeSort(randArray, 0, arraySizeList[l]-1);
                    t2 = Clock::now();
                    vecMSTimes.push_back(std::chrono::duration_cast<std::chrono::nanoseconds>(t2 - t1).count());
                    if (vecMSTimes[l] < 0)
                    {
                        vecMSTimes[l] = -1 * vecMSTimes[l];
                    }
                    break;
                case 4:
                    t1 = Clock::now();
                    quickSort(randArray, 0, arraySizeList[l]);
                    t2 = Clock::now();
                    vecQSTimes.push_back(std::chrono::duration_cast<std::chrono::nanoseconds>(t2 - t1).count());
                    if (vecQSTimes[l] < 0)
                    {
                        vecQSTimes[l] = -1 * vecQSTimes[l];
                    }
                    break;
                case 5:
                    t1 = Clock::now();
                    radixSort(randArray, arraySizeList[l]);
                    t2 = Clock::now();
                    vecRSTimes.push_back(std::chrono::duration_cast<std::chrono::nanoseconds>(t2 - t1).count());
                    if (vecRSTimes[l] < 0)
                    {
                        vecRSTimes[l] = -1 * vecRSTimes[l];
                    }
                    break;
            }
        }
    }

    std::copy(vecBSTimes.begin(), vecBSTimes.end(), arrBSTimes);
    std::copy(vecISTimes.begin(), vecISTimes.end(), arrISTimes);
    std::copy(vecMSTimes.begin(), vecMSTimes.end(), arrMSTimes);
    std::copy(vecQSTimes.begin(), vecQSTimes.end(), arrQSTimes);
    std::copy(vecRSTimes.begin(), vecRSTimes.end(), arrRSTimes);

    PrintTable(arrBSTimes, arrISTimes, arrMSTimes, arrQSTimes, arrRSTimes);
}