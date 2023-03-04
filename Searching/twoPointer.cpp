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

int main()
{
    int arr1[] = {1, 2, 3, 4, 6, 5};
    int len = sizeof(arr1) / sizeof(arr1[0]);
    cout << isPair(10, arr1, 6);
    return 0;
}