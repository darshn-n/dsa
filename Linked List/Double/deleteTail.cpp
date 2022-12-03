#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *prev;
    Node *next;
    Node(int d)
    {
        data = d;
        prev = next = NULL;
    }
};

Node *deleteTail(Node *head)
{
    if (head == NULL)
    {
        return NULL;
    }
    if (head->next == NULL)
    {
        delete head;
        return NULL;
    }

    Node *curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }

    curr->prev->next = NULL;
    delete curr;
    return head;
}

int main()
{
    return 0;
}
