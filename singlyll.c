#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
struct Node *CreateNode(int value)
{
    struct Node *newnode=(struct Node*)malloc(sizeof(struct Node));
    if (newnode==NULL)
    {
        printf("memory allocation failed");
        exit(1);
    }
    else{
        newnode->data=value;
        newnode->next=NULL;
        return newnode;
    }
}
int main()
{
    struct Node *head,*temp;
    int i,n,value;
    printf("enter the value of the first node");
    scanf("%d",&value);
    printf("enter the number of nodes u want");
    scanf("%d",&n);
    head=CreateNode(value);
    temp=head;
    for(i=1;i<n;i++)
    {
        printf("enter the value of the node");
        scanf("%d",&value);
        temp->next=CreateNode(value);
        temp=temp->next;
    }
    temp=head;
    while(temp->!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    return 0;
}