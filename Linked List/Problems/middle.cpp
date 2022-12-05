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

void printMiddle(Node *head)
{
    int count;
    Node *curr;
    for (curr = head; curr != nullptr; curr = curr->next)
    {
        count++;
    }

    curr = head;
    for (int i = 0; i < count / 2; i++)
    {
        curr = curr->next;
    }
    cout << curr->data << endl;
}

void printMiddleOpt(Node *head)
{
    if (head == nullptr)
    {
        return;
    }
    Node *slow = head, *fast = head;
    while (fast != nullptr && fast->next != nullptr)
    {
        slow = slow->next;
        fast = fast->next > next;
    }
    cout << slow->data;
}

int main()
{
    return 0;
}