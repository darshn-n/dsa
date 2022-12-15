#include <iostream>
using namespace std;

int kthbit(int k, int n)
{
    if (n & (1 << (k - 1)) == 1)
    {
        cout << "Yes";
    }
    cout << "No";
}



int main()
{
    kthbit(1, 3);
    return 0;
}
