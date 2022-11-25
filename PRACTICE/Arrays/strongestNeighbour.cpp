#include <bits/stdc++.h>
using namespace std;

class StrongestNeighbour
{

    // Function to find maximum for every adjacent pairs in the array.
    void maximumAdjacent(int sizeOfArray, int arr[])
    {
        {

            int a[sizeOfArray - 1];

            for (int i = 1; i < sizeOfArray; i++)

            {

                a[i - 1] = max(arr[i - 1], arr[i]);
            }

            for (int i = 0; i < sizeOfArray - 1; i++)

            {

                cout << a[i] << " ";
            }
        }
    }
}
