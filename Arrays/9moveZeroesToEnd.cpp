#include <iostream>
using namespace std;
int moveZeroes(int arr[], int n);
int moveZeroes2(int arr[], int n);
int main()
{
    int arr1[] = {10, 10, 0, 23, 6, 3, 0, 12, 0, 0, 25};
    int len = sizeof(arr1) / sizeof(arr1[0]);
    int res = moveZeroes(arr1, len);
    int res1 = moveZeroes2(arr1, len);
    cout << res << endl;
    cout << res1;
    return 0;
}

// Naive;

int moveZeroes(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] != 0)
                {
                    swap(arr[i], arr[j]);
                }
            }
        }
    }

    for (int k = 0; k < n; k++)
    {
        cout << arr[k] << endl;
    }
}

// Efficient;

int moveZeroes2(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[i], arr[count]);
            count++;
        }
    }
}
