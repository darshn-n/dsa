#include <iostream>
using namespace std;

int searchArray(int arr[], int n, int x);

int main()
{

    int arr1[] = {1, 2, 3, 4, 5};
    int len = sizeof(arr1) / sizeof(arr1[0]);
    int res1 = searchArray(arr1, len, 5);
    int res2 = searchArray(arr1, len, 9);
    cout << res1 << endl;
    ;
    cout << res2;
    return 0;
}

int searchArray(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return i;
        }
    }
    return -1;
}


// TC : O(n)