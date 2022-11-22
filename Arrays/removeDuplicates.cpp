#include <iostream>
using namespace std;
int removeDups(int arr[], int n);
int removeDups2(int arr[], int n);
int main()
{
    int arr1[] = {10, 10, 20, 20, 30, 30, 40};
    int len = sizeof(arr1) / sizeof(arr1[0]);
    int res = removeDups(arr1, len);
    int res2 = removeDups2(arr1, len);
    cout << res << endl;
    cout << res2;
    return 0;
}

int removeDups(int arr[], int n)
{
    int temp[n];
    temp[0] = arr[0];
    int res = 1;
    for (int i = 1; i < n; i++)
    {
        if (temp[res - 1] != arr[i])
        {
            temp[res] = arr[i];
            res++;
        }
    }

    // Moving from temp to arr;

    for (int i = 0; i < res; i++)
    {
        arr[i] = temp[i];
    }

    // display;

    for (int i = 0; i < res; i++)
    {
        cout << arr[i] << endl;
    }

    return res;
}

int removeDups2(int arr[], int n)
{
    int res = 1;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[res - 1])
        {
            arr[res] = arr[i];
            res++;
        }
    }
    return res;

    // display;

    for (int i = 0; i < res; i++)
    {
        cout << arr[i] << endl;
    }
}