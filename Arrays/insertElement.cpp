#include <iostream>
using namespace std;

int insertElement(int arr[], int n, int x, int pos);
int main()
{
    int arr1[] = {1, 2, 3, 4, 5};
    int len = sizeof(arr1) / sizeof(arr1[0]);
    int res = insertElement(arr1, len, 4, 2);
    cout << res;

    return 0;
}

int insertElement(int arr[], int n, int x, int pos)
{
    int idx = pos - 1;
    for (int i = n - 1; i >= idx; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[idx] = x;
    // Printing the new array
    for (int i = 0; i < n + 1; i++)
    {
        cout << arr[i] << endl;
    }

    return n + 1;
}