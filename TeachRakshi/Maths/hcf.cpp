#include <iostream>
using namespace std;

int hcf(int x, int y)
{
    if (y == 0)
    {
        return x;
    }
    return hcf(y, x % y);
}

int euclidHCF(int x, int y)
{
    while (x != y)
    {
        if (x > y)
        {
            x = x - y;
        }
        else if (x < y)
        {
            y = y - x;
        }
    }
    return y;
}

int main()
{
    cout << hcf(4, 8) << endl;
    cout << euclidHCF(6, 10);
    return 0;
}

// (8,4)
// (4, 0)
