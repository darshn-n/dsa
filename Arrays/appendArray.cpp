#include <iostream>
using namespace std;
int appendArray(int arr[], int n, int ele);
int main()
{
    int arr1[] = {1, 2, 3, 4, 5};
    int len = sizeof(arr1) / sizeof(arr1[0]);
    int res = appendArray(arr1, len, 99);
    cout << res;
    return 0;
}

int appendArray(int arr[], int n, int ele)
{
    arr[n] = ele;
    for (int i = 0; i < n + 1; i++)
    {
        cout << arr[i] << endl;
    }

    return n + 1;
}

// TC : O(1)