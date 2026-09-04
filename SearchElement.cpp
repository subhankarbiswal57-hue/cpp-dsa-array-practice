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
Node *Search(vector<int>arr,int val)
{
    Node *head=new Node(arr[0]);
    Node *trav=head;
    for (int i=1;i<arr.size();i++){
        Node *temp=new Node(arr[i]);
        trav->next=temp;
        trav=trav->next;
    }
    Node *temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    Node *ser=head;
    while(ser!=nullptr)
    {
        if(ser->data==val){
            cout<<"value found at"<<ser;
        }
        ser=ser->next;
    }
    return head;
}
int main()
{
    vector<int>arr={1,2,3,4,5,6,7,8,9};
    Node *head=Search(arr,3);
}