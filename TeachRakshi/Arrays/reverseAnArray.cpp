#include <iostream>
using namespace std;

int revArr(int arr[], int n)
{
    int low = 0;
    int high = n - 1;
    while (low < high)
    {
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }
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

    revArr(arr1, len);

    return 0;
}

// 1,2,3,4,5,6