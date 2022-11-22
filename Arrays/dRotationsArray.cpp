#include <iostream>
using namespace std;
int leftRotate(int arr[], int n, int d);
int main()
{
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int len = sizeof(arr1) / sizeof(arr1[0]);
    int res = leftRotate(arr1, len);
    cout << res << endl;
    return 0;
}


// Using Temp array;

int leftRotate(int arr[], int n, int d)
{
    int temp[d];

}