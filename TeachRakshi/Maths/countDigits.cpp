#include <iostream>
using namespace std;

int countDigitsAlgo(int x)
{
    int res = 0;
    while (x > 0)
    {
        x = x / 10;
        res++;
    }

    return res;
}

int main()
{
    int num = 18234;
    int result1 = countDigitsAlgo(num);
    cout << result1;
    return 0;
}

// TC : O(n)