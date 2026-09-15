#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node *prev;

    Node(int data1)
    {
        data = data1;
        next = NULL;
        prev = NULL;
    }
};

// Create DLL
Node *create(vector<int> arr)
{
    Node *head = new Node(arr[0]);
    Node *temp = head;

    for(int i = 1; i < arr.size(); i++)
    {
        Node *newnode = new Node(arr[i]);

        newnode->prev = temp;
        temp->next = newnode;

        temp = newnode;
    }

    return head;
}

// Insert at any position
Node *insert(Node *head, int val, int pos)
{
    Node *newnode = new Node(val);

    if(pos == 1)
    {
        newnode->next = head;
        head->prev = newnode;
        return newnode;
    }

    Node *temp = head;

    for(int i = 1; i < pos - 1; i++)
    {
        temp = temp->next;
    }

    newnode->next = temp->next;
    newnode->prev = temp;

    temp->next->prev = newnode;
    temp->next = newnode;

    return head;
}

// Print
void print(Node *head)
{
    while(head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};

    Node *head = create(arr);

    int val, pos;

    cout << "Enter value: ";
    cin >> val;

    cout << "Enter position: ";
    cin >> pos;

    head = insert(head, val, pos);

    print(head);

    return 0;
}