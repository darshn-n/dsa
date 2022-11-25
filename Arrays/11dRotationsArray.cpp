#include <bits/stdc++.h>
using namespace std;

// Function to rotate array
void Rotate(int arr[], int d, int n)
{
    // Storing rotated version of array
    int temp[n];

    // Keeping track of the current index
    // of temp[]
    int k = 0;

    // Storing the n - d elements of
    // array arr[] to the front of temp[]
    for (int i = d; i < n; i++)
    {
        temp[k] = arr[i];
        k++;
    }

    // Storing the first d elements of array arr[]
    //  into temp
    for (int i = 0; i < d; i++)
    {
        temp[k] = arr[i];
        k++;
    }

    // Copying the elements of temp[] in arr[]
    // to get the final rotated array
    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }
}


void Rotate2(int arr[], int d, int n)
{
    int p = 1;
    while (p <= d) {
        int last = arr[0];
        for (int i = 0; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        arr[n - 1] = last;
        p++;
    }
}

// Function to print elements of array
void displayArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}



// Driver code
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int N = sizeof(arr) / sizeof(arr[0]);
    int d = 2;

    // Function calling
    Rotate(arr, d, N);
    displayArray(arr, N);

    return 0;
}