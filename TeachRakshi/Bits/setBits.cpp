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

int setBits2(int n)
{
    int res = 0;
    while (n > 0)
    {
        n = (n & (n - 1));
        res++;
    }
    return res;
}

int main()
{
    cout << setBits2(7);
    return 0;
}


// 7: 111;
// 6: 110;

