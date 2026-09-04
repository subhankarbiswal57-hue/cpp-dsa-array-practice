#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int data1)
    {
        data=data1;
        next=nullptr;
    }
};
Node *traversing(vector<int>arr)
{
    Node *head=new Node(arr[0]);
    Node *mover=head;
    for (int i = 1; i <arr.size(); i++){
        Node *temp=new Node(arr[i]);
        mover->next=temp;
        mover=mover->next;
    }
    return head;
}
int main()
{
    vector<int>arr={1,2,3,4,5};
    Node *head=traversing(arr);
    Node *temp=head;
    while (temp!=nullptr)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}