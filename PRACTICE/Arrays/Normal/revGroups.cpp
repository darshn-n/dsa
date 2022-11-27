#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution
{
public:
    // Function to reverse every sub-array group of size k.

    void rev(int i, int j, vector<long long> &arr)
    {
        while (i < j)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    void reverseInGroups(vector<long long> &arr, int n, int k)
    {
        // code here

        int i = 0, j = 0;
        while (j < n)
        {

            if (j - i + 1 == k)
            {
                rev(i, j, arr);
                i = j + 1;
            }

            j++;
        }

        rev(i, j - 1, arr);
    }
};