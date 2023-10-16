#include "PrintTable.h"

// Function to print out a complete table of all times for each sorting algorithm and number of array elements
void PrintTable(int arrBS[], int arrIS[], int arrMS [], int arrQS[], int arrRS[])
{
    std::cout << endl << endl;
    std::cout << "Algorithm Times";
    std::cout << endl << endl;

    std::cout << left;
    std::cout << setw(20) << "Alg Name";
    std::cout << setw(15) << "10";
    std::cout << setw(15) << "100";
    std::cout << setw(15) << "500";
    std::cout << setw(15) << "5000";
    std::cout << right;
    std::cout << setw(10) << "25000";
    std::cout << endl;
    for (int i = 0; i < 90; i++)
        std::cout << "*";
    std::cout << endl;
    for (int j = 1; j <= 5; j++)
    {
        switch (j)
        {
            case 1:
                cout << left;
                cout << setw(20) << "Bubble Sort";
                for (int k = 0; k < 4; k++)
                {
                    cout << setw(15) << arrBS[k];
                }
                cout << right;
                cout << setw(10) << arrBS[4] << endl;
                break;
            case 2:
                cout << left;
                cout << setw(20) << "Insertion Sort";
                for (int k = 0; k < 4; k++)
                {
                    cout << setw(15) << arrIS[k];
                }
                cout << right;
                cout << setw(10) << arrIS[4] << endl;
                break;
            case 3:
                cout << left;
                cout << setw(20) << "Merge Sort";
                for (int k = 0; k < 4; k++)
                {
                    cout << setw(15) << arrMS[k];
                }
                cout << right;
                cout << setw(10) << arrMS[4] << endl;
                break;
            case 4:
                cout << left;
                cout << setw(20) << "Quick Sort";
                for (int k = 0; k < 4; k++)
                {
                    cout << setw(15) << arrQS[k];
                }
                cout << right;
                cout << setw(10) << arrQS[4] << endl;
                break;
            case 5:
                cout << left;
                cout << setw(20) << "Radix Sort";
                for (int k = 0; k < 4; k++)
                {
                    cout << setw(15) << arrRS[k];
                }
                cout << right;
                cout << setw(10) << arrRS[4] << endl;
                break;
        }
    }
}