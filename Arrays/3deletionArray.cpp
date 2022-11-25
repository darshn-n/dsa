#include <iostream>
using namespace std;
int deletionArray(int arr[], int n, int x);
void display(int arr[], int n);
int main()
{
    int arr1[] = {1, 2, 3, 4, 5};
    int len = sizeof(arr1) / sizeof(arr1[0]);
    deletionArray(arr1, len, 4);
    display(arr1, len - 1);

    return 0;
}

int deletionArray(int arr[], int n, int x)
{
    int i;
    // If element is present, Traverse and break;

    for (i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            break;
        }
    }
    // If element is not present;

    if (i == n)
    {
        return n;
    }

    // i will have the index of the element that has to be deleted, So traverse from i itself;
    for (int j = i; j < n - 1; j++)
    {
        arr[j] = arr[j + 1];
    }

    return (n - 1);
}

void display(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }
}

// TC : O(n)