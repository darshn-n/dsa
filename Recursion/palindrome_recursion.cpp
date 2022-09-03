#include <iostream>
using namespace std;
bool palindromeRecursion(string &str, int start, int end);
int main()
{
    string str = "abcba";
    palindromeRecursion(str, 1, 5);
    return 0;
}

bool palindromeRecursion(string &str, int start, int end)
{
    if (start >= end)
    {
        return true;
    }
    return (str[start] == str[end]) && palindromeRecursion(str, start + 1, end - 1);
}