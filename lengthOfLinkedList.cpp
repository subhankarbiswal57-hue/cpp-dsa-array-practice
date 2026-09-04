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
Node *leng(vector<int>arr)
{
    Node *head=new Node(arr[0]);
    Node *traver=head;
    for(int i=1;i<arr.size();i++){
        Node *temp=new Node(arr[i]);
        traver->next=temp;
        traver=traver->next;
    }
    Node *temp=head;
    int cnt=0;
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
        cnt++;}
    cout <<cnt;
return head;
}
int main()
{
    vector<int>arr={1,2,3,4,5};
    Node *head=leng(arr);
}