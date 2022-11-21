#include<iostream>
using namespace std;

int main()
{
    int arr1[]={1,2,3,4,5};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    for (int i = 0; i < n; i++)
    {
        cout<<arr1[i]<<endl;
    }
    
    return 0;
}


// TC: O(n)