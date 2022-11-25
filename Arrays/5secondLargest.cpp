#include <iostream>
using namespace std;
int largest2(int arr[], int n);
int secondLargest1(int arr[], int n);
int secondLargest2(int arr[], int n);
int main()
{
    int arr1[] = {69, 62, 61, 60, 36};
    int len = sizeof(arr1) / sizeof(arr1[0]);
    int res1 = secondLargest1(arr1, len);
    int res2 = secondLargest1(arr1, len);
    cout << res1 << endl;
    cout << res2;

    return 0;
}

// Naive:

int secondLargest1(int arr[], int n)
{
    int res = -1;
    int largest = largest2(arr, n);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[largest])
        {
            if (res == -1)
            {
                res = i;
            }
            else if (arr[i] > arr[res])
            {
                res = i;
            }
        }
    }
    return res;
}

int largest2(int arr[], int n)
{
    int res = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[res])
        {
            res = i;
        }
    }
    return res;
}

// Efficient:

int secondLargest2(int arr[], int n)
{
    int res = -1;
    int largest = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[largest])
        {
            // res = largest;
            largest = i;
        }
        else if (arr[i] != arr[largest])
        {
            if (arr[i] > arr[res])
            {
                res = i;
            }
        }
    }
    return res;
}
