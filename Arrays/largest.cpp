#include <iostream>
using namespace std;
int largest1(int arr[], int n);
int largest2(int arr[], int n);
int main()
{
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {1, 2, 783, 4, 5};
    int len = sizeof(arr1) / sizeof(arr1[0]);
    int res1 = largest1(arr1, len);
    int res2 = largest2(arr2, len);
    cout << res1 << endl;
    cout << res2 << endl;
    return 0;
}

int largest1(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        bool flag = true;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                flag = false;
                break;
            }
        }
        if (flag == true)
        {
            return i;
        }
    }
    return -1;
}

int largest2(int arr[], int n)
{
    int res = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[res])
        {
            res = i;
        }
    }
    return res;
}

// TC : O(n);