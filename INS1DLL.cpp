#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node *prev;
    Node(int data1){
        data=data1;
        next=nullptr;
        prev=nullptr;
    }
};
Node *traverse(vector<int>arr)
{
    Node *head=new Node(arr[0]);
    Node *temp=head;
    for(int i=1;i<arr.size();i++)
    {
        Node *newnode=new Node(arr[i]);
        temp->next=newnode;
        newnode->prev=temp;
        temp=newnode;
    }
    return head;
}
Node *Insert(Node *head,int value){
    Node *newnode=new Node(value);
    Node *temp=head;
    if(temp==NULL)
    {
        temp=newnode;
        newnode->next=NULL;
    }
    temp->prev=newnode;
    newnode->next=temp;
    head=newnode;
    return head;
}
void display(Node *head)
{
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
int main()
{
    vector<int>arr={1,2,3,4,5,6};
    Node *head=traverse(arr);
    head=Insert(head,3);
    display(head);
}