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

Node *insertTailNaive(Node *head, int d)
{
    Node *temp = new Node(x);
    if (head == nullptr)
    {
        temp->next = temp;
        return temp;
    }

    Node *curr = head;
    while (curr->next != head)
    {
        curr = curr->next;
    }
    curr->next = temp;
    temp->next = head;
    return head;
}

Node *insertTail(Node *head, int d)
{
    Node *temp = new Node(x);
    if (head == nullptr)
    {
        temp->next = temp;
        return temp;
    }
}

int main()
{
    return 0;
}