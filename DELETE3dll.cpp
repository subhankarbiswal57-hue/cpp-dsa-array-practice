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

Node *deletePosition(Node *head, int pos)
{
    if(pos == 1)
    {
        Node *temp = head;

        head = head->next;
        head->prev = NULL;

        delete temp;

        return head;
    }

    Node *temp = head;

    for(int i = 1; i < pos; i++)
    {
        temp = temp->next;
    }

    temp->prev->next = temp->next;

    if(temp->next != NULL)
    {
        temp->next->prev = temp->prev;
    }

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

    int pos;

    cout << "Enter position: ";
    cin >> pos;

    head = deletePosition(head, pos);

    print(head);

    return 0;
}