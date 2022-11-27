//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    // arr: input array
    // num: length of array
    // This function returns true or false
    // Function to check if array is sorted and rotated.
    bool checkRotatedAndSorted(int arr[], int num)
    {

        // Your code here
        if (arr[num - 1] > arr[0])

        {

            int count = 0;

            for (int i = 0; i < num - 1; i++)

            {

                if (arr[i + 1] > arr[i])

                    count++;
            }

            if (count == 1)

            {

                return true;
            }

            else
                false;
        }

        else if (arr[num - 1] < arr[0])

        {

            int count = 0;

            for (int i = 0; i < num - 1; i++)

            {

                if (arr[i + 1] < arr[i])

                    count++;
            }

            if (count == 1)

            {

                return true;
            }

            else
                false;
        }
    }
};

//{ Driver Code Starts.

int main()
{
    int T;
    // testcases
    cin >> T;

    while (T--)
    {
        int num;
        // size of array
        cin >> num;
        int arr[num];

        // inserting elements
        for (int i = 0; i < num; ++i)
            cin >> arr[i];

        bool flag = false;
        Solution ob;

        // function call
        flag = ob.checkRotatedAndSorted(arr, num);

        // printing "No" if not sorted and
        // rotated else "Yes"
        if (!flag)
        {
            cout << "No" << endl;
        }
        else
            cout << "Yes" << endl;
    }

    return 0;
}
// } Driver Code Ends