#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    // Constructor:
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};


Node *revSll(Node *head)
{
    if (head == nullptr)
    {
        return NULL;
    }
    vector<int> arr;
    for (Node *curr = head; curr != nullptr; curr = curr->next)
    {
        arr.push_back(curr->data);
    }
    for (Node *curr = head; curr != nullptr; curr = curr->next)
    {
        curr->data = arr.back();
        arr.pop_back();
    }
}

int main()
{
    return 0;
}