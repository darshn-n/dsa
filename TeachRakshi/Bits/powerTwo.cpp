#include <iostream>
using namespace std;

void powerOfTwo(int n)
{
    int res = 0;
    while (n > 0)
    {
        n = (n & (n - 1));
        res++;
    }
    if (res == 1)
    {
        cout << "Yes";
    }
    cout << "No";
}

int main()
{
    cout << powerOfTwo(7);
    return 0;
}

// 2: 1, 4: 1, 8: 1;