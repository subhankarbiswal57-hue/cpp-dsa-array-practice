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
Node *deleteele(Node *head,int k){
    Node *temp =head;
    Node *prev=NULL;
    int cnt =1;
    if(temp==NULL)
    return NULL;
    while(temp!=NULL)
    {
        if(cnt ==k)
        {
            Node *del=prev->next;
            prev->next=prev->next->next;
            delete del;
            break;
        }
        prev=temp;
        temp=temp->next;
        cnt++;
    }return head;
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
    head=deleteele(head,3);
    print(head);
    return 0;
}