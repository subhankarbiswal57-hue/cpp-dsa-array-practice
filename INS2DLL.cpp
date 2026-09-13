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
    for(int i=1;i<arr.size();i++){
        Node *newnode=new Node(arr[i]);
        newnode->prev=temp;
        temp->next=newnode;
        temp=newnode;
    }
    return head;
}
Node *insert(Node* head,int val){
    Node *temp=head;
    Node *newnode;
    if(temp==NULL){
        newnode=temp;
    }
    while(temp->next!=NULL){
        temp=temp->next;
    }
    newnode->prev=temp;
    temp->next=newnode;
    newnode->next=NULL;
    return head;
}
void disp(Node *head)