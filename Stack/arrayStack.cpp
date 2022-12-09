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

int main()
{
    arrayStack s(5);
    s.push(10);
    s.pop();
    s.isEmpty();
    s.peek();
    s.push(20);
    s.push(40);
    cout << s.size();
    return 0;
}