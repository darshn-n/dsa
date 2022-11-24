#include <iostream>
using namespace std;
int euclidGCD(int a, int b);
int optimizedGCD(int x, int y);
int main()
{

    cout << euclidGCD(12, 4) << endl;
    cout << optimizedGCD(12, 4);

    return 0;
}

int euclidGCD(int a, int b)
{
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    return a;
}

int optimizedGCD(int x, int y)
{
    if (y == 0)
    {
        return x;
    }
    return optimizedGCD(y, x % y);
}