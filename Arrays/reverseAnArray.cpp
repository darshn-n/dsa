#include <iostream>
using namespace std;
int reverseAnArray(int arr[], int n);
int main()
{
    int arr1[] = {69, 62, 61, 60, 36};
    int len = sizeof(arr1) / sizeof(arr1[0]);
    int res1 = reverseAnArray(arr1, len);
    return 0;
}

int reverseAnArray(int arr[], int n)
{
    int low = 0;
    int high = n - 1;
    while (low < high)
    {
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}