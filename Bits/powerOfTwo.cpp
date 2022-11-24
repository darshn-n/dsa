
#include <iostream>
using namespace std;
int powerOfTwo(int n);

int main()
{
    powerOfTwo(6);
    powerOfTwo(4);
    return 0;
}

int powerOfTwo(int n)
{
    int res = 0;
    while (n > 0)
    {
        n = (n & (n - 1)); // Check out below comment.
        res++;
    }
    if (res == 1)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}
