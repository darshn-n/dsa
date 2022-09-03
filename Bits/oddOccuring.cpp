#include <iostream>
using namespace std;
int oddOccuring(int arr[10], int n);
int main()
{
    int arr[10] = {1, 1, 1, 2, 2, 4, 4};
    cout << oddOccuring(arr, 7);
    return 0;
}

// By doing xor with res = 0;

int oddOccuring(int arr[10], int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        res = res ^ arr[i];
    }
    return res;
}



// Finding missing number in a natural sequence.