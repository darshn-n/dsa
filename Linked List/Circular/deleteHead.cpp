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

Node *deleteHead(Node *head)
{
    Node *curr = head;
    while (curr->next != head)
    {
        curr = curr->next;
    }
    curr->next = head->next;
    delete head;
    return curr->next;
}



int main()
{
    return 0;
}