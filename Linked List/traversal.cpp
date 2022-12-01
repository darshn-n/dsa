

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
        next = null;
    }
};

void printList(Node *head)
{
    Node *curr = head; // Initialising the first element
    while (curr != null)
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
    head->next->next->next = new Node(40);
    printList(head);
    return 0;
}