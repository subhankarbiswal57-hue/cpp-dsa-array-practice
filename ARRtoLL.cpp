#include <bits/stdc++.h>
using namespace std;
struct Node{
    public:
    int data;
    Node *next;
    Node(int data1)
    {
        data=data1;
        next=nullptr;
    }
};
Node  *convertarrTOll(vector<int>arr)
{
    Node *head=new Node(arr[0]);
    Node *mover=head;
    for(int i=1;i<arr.size();i++)
    {
        Node *temp=new Node(arr[i]);
        mover->next=temp;
        mover=mover->next;
    }
    return head;
}
int main()
{
    vector<int>arr={2,3,4,5};
    Node *head=convertarrTOll(arr);
    cout<<head->data;   
}