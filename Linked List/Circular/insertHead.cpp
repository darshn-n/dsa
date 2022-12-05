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

Node *insertHeadNaive(Node *head, int d)
{

    // TC : O(n);
    Node *temp = new Node(d);
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
    return temp; // head;
}

Node *insertHeadOpt(Node *head, int x)
{
    Node *temp = new Node(x);
    if (head == nullptr)
    {
        temp->next = temp;
        return temp;
    }

    // 10 > 20 > 25 > 30;
    // 10 > 15 > 20 > 25 > 30;

    temp->next = head->next;
    head->next = temp;

    // Swap two data of first and second;
    int t = head->data;
    head->data = temp->data;
    temp->data = t;

    return temp;  // head remains constant only value will be changed.
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
