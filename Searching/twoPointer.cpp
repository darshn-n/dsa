#include <bits/stdc++.h>
using namespace std;

bool isPair(int x, int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == x)
            {
                return true;
            }
        }
    }
    return false;
}

// Efficient approach:
// If the sum of any end elements form less than the target, then ignore the left most element you took.
// Else ignore right element you took.

bool isPairEfficient(int x, int arr[], int n)
{
    int low = 0, high = n - 1;
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

int main()
{
    int arr1[] = {1, 2, 3, 4, 5, 6};
    int len = sizeof(arr1) / sizeof(arr1[0]);
    cout << isPair(10, arr1, 6) << endl;
    cout << isPairEfficient(10, arr1, 6);
    return 0;
}