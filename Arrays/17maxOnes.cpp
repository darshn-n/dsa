#include <bits/stdc++.h>
using namespace std;

int maxOnes(int arr[], int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        int count = 0;
        for (int j = i; j < n; j++)
        {
            if (arr[i] == 1)
            {
                count++;
            }
            else
            {
                break;
            }
        }
        res = max(res, count);
    }
    return res;
}

int maxOnes2(int arr[], int n)
{
    int res, count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            count = 0;
        }
        else
        {
            count++;
            res = max(res, count);
        }
    }
}

int main()
{
    int arr1[] = {1, 1, 1, 0, 0, 1, 1};
    int len = sizeof(arr1) / sizeof(arr1[0]);
    cout << maxOnes(arr1, len) << endl;
    cout << maxOnes2(arr1, len);
    return 0;
}