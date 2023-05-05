#include <iostream>
using namespace std;

int rotateArray(int arr[], int n, int d)
{
    int temp[n];
    int k = 0;

    for (int i = d; i < n; i++)
    {
        temp[k] = arr[i];
        k++;
    }

    for (int i = 0; i < d; i++)
    {
        temp[k] = arr[i];
        k++;
    }

    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
}

void displayArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr1[] = {
        1,
        2,
        3,
        4,
        5,
        6,
    };
    int len = sizeof(arr1) / sizeof(arr1[0]);
    int d = 2;
    rotateArray(arr1, len, d);
    displayArray(arr1, len);
    return 0;
}

// 1,2,3,4,5
// 2
// 3,4,5,1,2