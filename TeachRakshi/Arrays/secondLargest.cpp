#include <iostream>
using namespace std;

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

int secondLar(int arr[], int n)
{
    int res = 0;
    int lar = largest2(arr, n);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[lar])
        {
            if (arr[i] > arr[res])
            {
                res = i;
            }
        }
    }
    return res;
}

// Efficient:

int secLar2(int arr[], int n)
{
    int res = 0;
    int largest = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[largest])
        {
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

int main()
{
    int arr1[] = {
        901,
        2001,
        9001,
        3,
        1,
        2,
        4,
        3001,
        67,
    };
    int len = sizeof(arr1) / sizeof(arr1[0]);

    int res = secondLar(arr1, len);
    int res2 = secLar2(arr1, len);
    cout << "Largest Index : " << res << endl;
    cout << "Largest Index : " << res2;
    return 0;
}