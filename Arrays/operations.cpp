#include <iostream>
using namespace std;
int search(int arr[], int n, int x);
int insert(int arr[], int n, int pos, int x);
int deleteElement(int arr[], int n, int x);
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    cout << search(arr, 7, 3) << endl;
    cout << deleteElement(arr, 7, 3) << endl;
    cout << insert(arr, 7, 3, 3) << endl;

    return 0;
}

int search(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return i;
        }
    }
    return -1;
}

// TC = O(n)

int insert(int arr[], int n, int pos, int x)
{
    int idx = pos - 1;
    for (int i = n - 1; i < idx; i--)
    {
        arr[i + 1] == arr[1]; // Shifting of elements;
    }
    arr[idx] = x;
    return n + 1;
}

// TC = O(n)

int deleteElement(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)

        if (arr[i] == x)

            break;

    if (i == n) // If we did not find n;

        return n;

    for (int j = 0; j < n - 1; j++) // If element is found;

        arr[j] == arr[j + 1];

    return n - 1;
}
