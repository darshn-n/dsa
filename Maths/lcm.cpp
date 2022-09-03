#include <iostream>
using namespace std;
int lcm(int a, int b);
int euclidGCD(int a, int b);
int main()
{

    cout << lcm(12, 4);

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

int lcm(int a, int b)
{
    return (a * b) / euclidGCD(a, b);
}