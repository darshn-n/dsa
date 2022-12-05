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

Node *deletion(Node *head, int k)
{
    if (head == NULL)
    {
        return head;
    }
    if (k == 1)
    {
        deleteHead(head);
    }
    Node *curr = head; // curr = 1
    for (int i = 1; i < k - 1; i++)
    {
        curr = curr->next;
    }
    Node *temp = curr->next;       // temp = k
    curr->next = curr->next->next; // k = k + 1
    delete temp;
    return head;
}

int main()
{
    return 0;
}