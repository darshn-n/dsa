#include <iostream>
using namespace std;

int insertionMid(int arr[], int n, int pos, int ele)
{
    for (int i = n - 1; i >= pos - 1; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[pos - 1] = ele;
    return n + 1;
}

void displayArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    int arr1[] = {1, 2, 3};
    int ele = 4;
    int pos = 2;
    int len = sizeof(arr1) / sizeof(arr1[0]);

    insertionMid(arr1, len, pos, ele);
    displayArray(arr1, len + 1);
    return 0;
}

// {1,2,3}
// 5,2
// {1,5,2,3}

// {1,2,3}