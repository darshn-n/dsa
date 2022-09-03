#include <iostream>
using namespace std;
int main()
{
    int x = 378;
    int res = 0;
    while (x > 0)
    {
        x = x / 10;
        res++;
    }
    cout << res;

    return 0;
}