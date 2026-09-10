#include <bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int data)
    {
        this->data=data;
        next=nullptr;
    }
};
Node *traverse(vector<int>arr)
{
    Node *head=new Node(arr[0]);
    Node *trav =head;
    for(int i=1;i<arr.size();i++)
    {
        Node *temp=new Node(arr[i]);
        trav->next=temp;
        trav=trav->next;
    }
    return head;
}
Node *Insert(Node *head,int value,int pos)
{
    Node *newnode=new Node(value);
    Node *temp=head;
    if(temp==NULL)
        return newnode;
    if(pos==1)
    {
        newnode->next=head;
        return newnode;
    }
    for(int i=1;i<pos-1;i++)
    {
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;
    return head;
}
void disp(Node*head)
{
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main()
{
    vector<int>arr={1,2,3,4,5,6};
    Node *head=traverse(arr);
    head=Insert(head,10,3);
    disp(head);

}