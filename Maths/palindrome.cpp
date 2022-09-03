#include <iostream>
using namespace std;
int isPalindrome(int n);
int main()
{
    int num = 3443;
    isPalindrome(num);
    return 0;
}

int isPalindrome(int n)
{
    int rev = 0;
    int temp = n;
    while (temp > 0)
    {
        int ld = temp % 10;
        rev = rev * 10 + ld;
        temp = temp / 10;
    }

    if (rev == n)
    {
        cout << "Palindrome";
    }
    else
    {
        cout << "Not Palindrome";
    }
}


// Linear TC


