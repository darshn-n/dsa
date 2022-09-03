#include <iostream>
using namespace std;
int kthbit(int k, int n);
int main()
{
    kthbit(3, 5);
    return 0;
}

int kthbit(int k, int n)
{
    if (n & (1 << (k - 1)) == 1)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}