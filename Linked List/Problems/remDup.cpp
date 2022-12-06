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

Node *remDup(Node *head)
{
    Node *curr = head;
    while (curr != nullptr || curr->next != nullptr)
    {
        if (curr->data == curr->next->data)
        {
            Node *temp = curr->next;
            curr->next = curr->next->next;
            delete temp;
        }
        curr = curr->next;
    }
}

int main()
{
    return 0;
}