#include <bits/stdc++.h>
using namespace std;

bool isSubStr(string s1, string s2)
{
    int j = 0;
    for (int i = 0; i < s1.length() && j < s2.length(); i++)
    {
        if (s1[i] == s2[j])
        {
            j++;
        }
    }
    return (j == s2.length());
}



bool isSubSeq(string s1, string s2, int n, int m){
    if ( m == 0 )
        return true;
        
    if ( n == 0 )
        return false;
    
    if ( s1[n-1] == s2[m-1] )
        return isSubSeq(s1, s2, n-1, m-1);
    
    else
        return isSubSeq(s1, s2, n-1, m);
}

int main()
{
    cout << isSubStr("Darshan", "han");
    
    return 0;
}