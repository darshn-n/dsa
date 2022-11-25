#include <iostream>
using namespace std;

bool isSorted(int arr[], int n);
bool isSorted2(int arr[], int n);

int main()
{
    int arr1[] = {1, 2, 3, 4, 5};
    int len = sizeof(arr1) / sizeof(arr1[0]);
    int res1 = isSorted(arr1, len);
    int res2 = isSorted2(arr1, len);
    cout << res1 << endl;
    cout << res2 << endl;

    return 0;
}

// Naive:

bool isSorted(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                return false;
            }
        }
    }
    return true;
}

// Efficient:

bool isSorted2(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i - 1])
        {
            return false;
        }
    }
    return true;
}
