#include <bits/stdc++.h>
using namespace std;

// Naive:
int leadersArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool flag = true;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] <= arr[j])
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            cout << arr[i] << endl;
        }
    }
}

// Efficient:

int leadersArray2(int arr[], int n)
{
    int currentLeader = arr[n - 1];
    cout << arr[n - 1] << endl;
    for (int i = n - 2; i >= 0; i--)
    {
        if (currentLeader < arr[i])
        {
            currentLeader = arr[i];
            cout << arr[i] << endl;
        }
    }
}

int main()
{
    int arr1[] = {8, 7, 6, 5, 4, 3, 2, 1};
    int len = sizeof(arr1) / sizeof(arr1[0]);

    leadersArray(arr1, len);
    leadersArray2(arr1, len);

    return 0;
}
