#include <iostream>
using namespace std;

bool isPalindrome(int n)
{
    int res = 0;
    int temp = n;

    while (temp > 0)
    {
        int remain = temp % 10;
        res = res * 10 + remain;
        temp = temp / 10;
    }

    if (res == n)
    {
        return true;
    }

    return false;
}

int main()
{
    cout << isPalindrome(1441);
    return 0;
}