#include <iostream>
using namespace std;

int deleteEle(int arr[], int n, int x)
{

    int i;

    for (i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            break;
        }
    }

    if (i == n)
    {
        return n;
    }

    for (int j = i; j < n - 1; j++)
    {
        arr[j] = arr[j + 1];
    }

    return n - 1;
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
    int ele = 2;
    int len = sizeof(arr1) / sizeof(arr1[0]);

    int res = deleteEle(arr1, len, ele);
    displayArray(arr1, res);

    return 0;
}

// {1,2,3,4}
// 2
// {1,3,4}