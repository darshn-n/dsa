//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    // Function to find element with more appearances between two elements in an
    // array.
    int majorityWins(int arr[], int n, int x, int y)
    {
        // code here
        int a = 0, b = 0;
        a = count(arr, arr + n, x);
        b = count(arr, arr + n, y);

        if (a == b)
            return x > y ? y : x;
        return a > b ? x : y;
    }
    int majorityWins2(int arr[], int n, int x, int y)
    {
        int countx = 1, county = 1;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == x)
                countx++;
            else if (arr[i] == y)
                county++;
        }
        if (countx == county)
            return min(x, y);
        else if (countx > county)
            return x;
        else
            return y;
    }
};

//{ Driver Code Starts.
int main()
{

    int t;      // Testcases
    cin >> t;   // Input the testcases
    while (t--) // Until all testcases are exhausted
    {
        int n;      // Size of array
        cin >> n;   // Input the size
        int arr[n]; // Declaring array of size n
        for (int i = 0; i < n;
             i++) // Running a loop to input all elements of arr
            cin >> arr[i];

        int x, y;      // declare x and y
        cin >> x >> y; // input x and y
        Solution obj;
        cout << obj.majorityWins(arr, n, x, y)
             << endl; // calling the function that you complete
    }

    return 0;
}
// } Driver Code Ends