#include <bits/stdc++.h>
using namespace std;

int missingNumber(int arr[], int n)
{
    sort(arr, arr + n);
    int miss = 1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == miss)
        {
            miss++;
        }
    }
    return miss;
}

int main()
{
    int arr1[] = {3,4,1,2,5,8};
    int len = sizeof(arr1) / sizeof(arr1[0]);
    cout << missingNumber(arr1, len);
    return 0;
}


// 1 2 3 4 5 8