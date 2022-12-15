#include <iostream>
using namespace std;

int setBits(int n)
{
    int res = 0;
    while (n > 0)
    {
        if ((n & 1) == 1)
        {
            res++;
            n = n >> 1;
        }
    }
    return res;
}

// TC = O(n)

int setBits2(int n)
{
    int res = 0;
    while (n > 0)
    {
        n = n & (n - 1); // Check out below comment.
        res++;
    }
    return res;
}

// Line 31: This line alone sets the last bit of a number from 1 to 0, reverse is not possible. It continously does until n==0;

int main()
{
    cout << setBits(5) << endl;

    cout << setBits2(5) << endl;
    return 0;
}
