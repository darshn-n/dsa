#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *prev;
    Node(int d)
    {
        data = d;
        prev = next = NULL;
    }
};

Node *reverse(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    Node *prev;
    Node *curr = head;
    while (curr != NULL)
    {
        prev = curr->prev;
        curr->prev = curr->next;
        curr->next = prev;

        curr = curr->prev; // curr++
    }
    return prev->prev;
}

void printList(Node *head)
{
    Node *curr = head;
    while (curr->next != NULL)
    {
        cout << curr->data << endl;
        curr = curr->next;
    }
}

int main()
{
    Node *head = new Node(10);
    Node *temp1 = new Node(20);
    Node *temp2 = new Node(30);
    head->next = temp1;
    temp1->prev = head;
    temp1->next = temp2;
    temp2->prev = temp1;
    printList(head);
    return 0;
}
