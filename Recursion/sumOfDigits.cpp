#include <iostream>
using namespace std;
int sumOfDigits(int n);
int main()
{
    int x = sumOfDigits(253);
    cout << x;
    return 0;
}

int sumOfDigits(int n)
{
    if (n == 0)
    {
        return 0;
    }
    return sumOfDigits(n / 10) + n % 10;
}