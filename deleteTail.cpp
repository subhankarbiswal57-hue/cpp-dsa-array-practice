#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data ;
    Node *next;
    Node(int data1){
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
Node * deletetail(Node *head)
{
    Node *temp=head;
    if(temp==NULL||temp->next==NULL)
    return NULL;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=nullptr;
    return head;
}
void print(Node *head)
{
    while(head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}
int main()
{
    vector<int>arr={1,2,3,4,5,6,7,8,9};
    Node *head=traverse(arr);
    head=deletetail(head);
    print(head);
}