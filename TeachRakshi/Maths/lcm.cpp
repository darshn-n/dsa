#include <iostream>
using namespace std;

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

int lcm(int x, int y)
{
    return x * y / euclidHCF(x, y);
}

int main()
{
    cout << lcm(8, 16);
    return 0;
}

/*

x=8;
y=16;

x*y/HCF(x,y)

*/