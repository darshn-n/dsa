#include <iostream>
using namespace std;

int appendArray(int arr[], int n, int num)
{
    arr[n] = num;
    return n + 1;
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
    int arr1[] = {1, 2, 3};
    int ele = 4;
    int len = sizeof(arr1) / sizeof(arr1[0]);
    cout << "Before : " << len << endl;
    appendArray(arr1, len, ele);
    cout << "After: " << len << endl;
    displayArray(arr1, len);
    return 0;
}

// {1,2,3}
// 4
//{1,2,3,4}