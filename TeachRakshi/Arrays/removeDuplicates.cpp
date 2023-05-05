#include <iostream>
using namespace std;

int remDup(int arr[], int n)
{
    int res = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[res - 1])
        {
            arr[res] = arr[i];
            res++;
        }
    }
    for (int i = 0; i < res; i++)
    {
        cout << arr[i] << " ";
    }

    return res;
}

int moveZeros(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[count]);
            count++;
        }

        // 1,1,0,0,1,1
    }

    for (int i = 0; i < count; i++)
    {
        cout << arr[i] << " ";
    }

    return count;
}

int main()
{
    int arr1[] = {
        1,
        2,
        3,
        3,
        4,
        5,
        6,
    };
    int len = sizeof(arr1) / sizeof(arr1[0]);

    remDup(arr1, len);
    return 0;
}

// 1,2,3,4,5,5,6,6

