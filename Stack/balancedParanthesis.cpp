#include <bits/stdc++.h>
using namespace std;
struct arrayStack
{
    int *arr;
    int cap, top;
    arrayStack(int c)
    {
        cap = c;
        arr = new int(cap);
        top = -1;
    }

    // Push function;
    void push(int x)
    {
        top++;
        arr[top] = x;
    }

    int pop()
    {
        int res = arr[top];
        top--;
        return res;
    }

    int peek()
    {
        return arr[top];
    }
    int size()
    {
        return top + 1;
    }
    bool isEmpty()
    {
        return (top == -1);
    }
};

bool matching(char a, char b)
{
    return ((a == "(" && b == ")") || (a == "{" && b == "}") || (a == "[" && b == "]"));
}

bool isBalanced(string str)
{
    arrayStack<char> s;
    for (char x : str)
    {
        if (x == "(" || x == "{" || x == "[")
        {
            s.push(x);
        }
        else
        {
            if (s.isEmpty() == true)
            {
                return false;
            }
            if (matching(s.top(), x) == false)
            {
                return false;
            }
            else
            {
                s.pop();
            }
        }
    }
    return (s.isEmpty() == true);
}

int main()
{
    return 0;
}