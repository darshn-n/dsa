#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int d)
    {
        data = d;
        next = nullptr;
    }
};

Node *insertHead(Node *head, int d)
{
    Node *temp = new Node(d);
    
}

void printList(Node *head)
{

    if (head == nullptr)
    {
        return;
    }
    cout << head->data << " ";
    for (Node *p = head->next; p != head; p = p->next)
    {
        cout << p->data << " ";
    }
}

int main()
{
    return 0;
}
