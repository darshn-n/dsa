#include <iostream>
using namespace std;

int facto(int n)
{
    if (n == 0)
    {
        return 1;
    }

    


    return (n * facto(n - 1));
}

int main()
{
    int n = 6;
    int res = facto(n);
    cout << res;
    return 0;
}