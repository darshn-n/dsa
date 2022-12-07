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

Node *recRev(Node *head)
{
    // Exceptions:
    if (head == nullptr || head->next == NULL)
    {
        return head;
    }

    // RecRev:
    Node *recHead = recRev(head->next);
    Node *recTail = head->next;
    recTail->next = head;
    head->next = nullptr;
    return recHead;
}

int main()
{
    return 0;
}