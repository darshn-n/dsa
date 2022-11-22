#include <iostream>
using namespace std;
int leftRotateByOne(int arr[], int n);
int main()
{
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int len = sizeof(arr1) / sizeof(arr1[0]);
    int res = leftRotateByOne(arr1, len);
    cout << res << endl;
    return 0;
}

int leftRotateByOne(int arr[], int n)
{
    int temp = arr[0];
    for (int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}
