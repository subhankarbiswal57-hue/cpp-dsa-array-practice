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
Node *traverse(vector<int>arr)
{
    Node *head=new Node(arr[0]);
    Node *trav=head;
    for(int i=1;i<arr.size();i++)
    {
        Node *temp=new Node(arr[i]);
        trav->next=temp;
        trav=trav->next;
    }
    return head;
}
Node *insertele(Node *head,int value)
{
    Node *newnode=new Node(value);
    Node *temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->next=NULL;
    return head;
}
void disp(Node *head)
{
    Node *temp=head;;
    while(temp!=NULL)
    {
        cout<< temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main()
{
    vector<int>arr={1,2,3,4,5,6,7,8};
    Node *head=traverse(arr);
    head=insertele(head,9);
    disp(head);


}
