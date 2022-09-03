#include <iostream>
using namespace std;

int largest(int arr[], int n);

int main()
{
    int arr[] = {1, 2, 3, 5, 6, 7};
    cout << largest(arr, 7) << endl;
    return 0;
}

int largest(int arr[], int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[res])
        {
            res = i;
        }
    }
    return res;
}