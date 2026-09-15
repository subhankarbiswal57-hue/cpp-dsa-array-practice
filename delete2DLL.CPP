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

Node *deleteTail(Node *head)
{
    Node *temp = head;

    while(temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->prev->next = NULL;

    delete temp;

    return head;
}

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

    head = deleteTail(head);

    print(head);

    return 0;
}