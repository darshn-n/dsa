#include <iostream>
using namespace std;

bool kthBit(int n, int k)
{
    if ((n >> k) & 1 == 1)
    {
        return true;
    }

    return false;
}

int main()
{
    cout << kthBit(5, 1);
    return 0;
}
