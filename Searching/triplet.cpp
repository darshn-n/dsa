#include <bits/stdc++.h>
using namespace std;

bool isTrip(int x, int arr[], int n)
{
    for (int i = 0; i < n - 2; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == x)
                {
                    return true;
                }
            }
        }
    }
    return false;
}

bool isPairEfficient(int x, int arr[], int n, int si)
{
    int low = si, high = n - 1;
    while (low < high)
    {
        if (arr[low] + arr[high] == x)
        {
            return true;
        }
        else if (arr[low] + arr[high] < x)
        {
            low++;
        }
        else
        {
            high--;
        }
    }
    return false;
}

bool isTrip1(int x, int arr[], int n)
{
    for (int i = 0; i < n - 2; i++)
    {
        if (isPairEfficient(x - arr[i], arr, n, i + 1))
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int arr1[] = {1, 2, 3, 4, 5, 6};
    int len = sizeof(arr1) / sizeof(arr1[0]);
    cout << isTrip(15, arr1, len) << endl;
    cout << isTrip1(15, arr1, len) << endl;
    // cout << isPairEfficient(10, arr1, 6);
    return 0;
}