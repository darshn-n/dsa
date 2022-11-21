#include <iostream>
using namespace std;
int deletionArray(int arr[], int n, int x);
int main()
{
    int arr1[] = {1, 2, 3, 4, 5};
    int len = sizeof(arr1) / sizeof(arr1[0]);
    int res = deletionArray(arr1, len, 4);
    cout << res;
    return 0;
}

int deletionArray(int arr[], int n, int x)
{
    int i;
    // If element is present, Traverse and break;

    for (i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            break;
        }
    }
    // If element is not present;

    if (i == n)
    {
        return n;
    }

    // i will have the index of the element that has to be deleted, So traverse from i itself;
    for (int j = i; i < n - 1; j++)
    {
        arr[j] = arr[j + 1];
    }
    // for (int k = 0; i < n - 1; i++)
    // {
    //     cout << arr[k] << endl;
    // }

    return (n - 1);
}

// TC : O(n)