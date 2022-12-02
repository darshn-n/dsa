#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

Node *insertBegin(Node *head, int x)
{
    // Create a new node temp;
    Node *temp = new Node(x);

    // Make it the first element by,
    temp->next = head;

    // Return temp variable;
    return temp;
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
    Node *head = new Node(40);
    head = insertBegin(head, 20);
    head = insertBegin(head, 30);
    printList(head);
    return 0;
}