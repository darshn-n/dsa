#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    bool visited;
    // Constructor:
    Node(int x)
    {
        data = x;
        next = NULL;
        visited = false;
    }
};

bool isLoop(Node *head)
{
    Node *temp = new Node(1);
    Node *curr = head;
    while (curr->next != nullptr)
    {
        if (curr->next == nullptr)
        {
            return false; // When is reaches to the last node;
        }
        if (curr->next == temp)
        {
            return true;
        }

        Node *newCurr = curr->next;
        curr->next = temp;
        curr = newCurr;
    }
    return false;
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    return 0;
}