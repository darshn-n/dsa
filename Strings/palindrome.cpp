#include <bits/stdc++.h>
using namespace std;

bool isPal(string str)
{
    string rev = str;
    reverse(rev.begin(), rev.end());
    return (rev == str);
}

bool isPal2(string str)
{
    int begin = 0;
    int end = str.length() - 1;

    while (begin < end)
    {
        if (str[begin] != str[end])
        {
            return false;
        }
        begin++;
        end--;
    }
    return true;
}

int main()
{
    cout << isPal("ABBA") << endl;
    cout << isPal2("ABBA");
    return 0;
}
