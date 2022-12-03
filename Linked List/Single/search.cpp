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

Node *searchList(Node *head, int x)
{
    int pos = 1;
    Node *curr = head;
    while (curr != NULL)
    {
        if (curr->data == x)
        {
            return pos;
        }

        pos++;
        curr = curr->next;
    }
    return -1;
}

Node *searchRecursive(Node *head, int x)
{
    if (head == null)
    {
        return -1;
    }
    if (head->data = x)
    {
        return 1;
    }
    else
    {
        int res = searchRecursive(head->next, x);
        if (res == -1)
        {
            return -1
        }
        else
        {
            return (res + 1);
        }
    }
}

void printList(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << curr->data << endl;
        curr = curr->next;
    }
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    searchList(head, 90);
    searchRecursive(head, 10);
    printList(head);
    return 0;
}