#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int data1)
    {
        data = data1;
        next = NULL;
    }
};

// Create Circular Linked List
Node *create(vector<int> arr)
{
    Node *head = new Node(arr[0]);
    Node *temp = head;

    for(int i = 1; i < arr.size(); i++)
    {
        Node *newnode = new Node(arr[i]);

        temp->next = newnode;
        temp = newnode;
    }

    // Last node points back to head
    temp->next = head;

    return head;
}

// Print Circular Linked List
void print(Node *head)
{
    Node *temp = head;

    do
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    while(temp != head);
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};

    Node *head = create(arr);

    print(head);

    return 0;
}
