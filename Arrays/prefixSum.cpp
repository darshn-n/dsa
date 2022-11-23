#include <bits/stdc++.h>
using namespace std;

int getSumNaive(int arr[], int n, int l, int r)
{
    int res = 0;
    for (int i = l; i <= r; i++)
    {
        res += arr[i];
    }
    return res;
}

int main()
{
    int arr2[] = {1, 2, 783, 4, 5};
    int len = sizeof(arr2) / sizeof(arr2[0]);
    int result = getSumNaive(arr2, len, 1, 3);
    cout << result;
    return 0;
}