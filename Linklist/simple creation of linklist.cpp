#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data=x;
        next=NULL;
    }
};
void printNode(struct Node *p)
{
    while(p!=NULL)
    {
        cout<<p->data<<endl;
        p=p->next;
    }
}
int recursivePrintNode(struct Node *p)
{
    if(p==NULL)return 0;
    else
    {
        cout<<p->data<<endl;
        recursivePrintNode(p->next);
    }
}
void insertInstart(struct Node *head,int x)
{
    struct Node *temp;
    temp=new Node(x);
    temp->next=head;
    printNode(temp);
}
struct Node * insertAtLast(struct Node *head,int x)
{
    struct Node *temp;
    temp=new Node(x);
    if(head->next==NULL)return temp;
    struct Node *curr=head;
    while(curr->next!=NULL)
    {
        curr=curr->next;
    }
    head->next=temp;
    return head;
}
void insertAtPosition(struct Node *head,int pos,int x)
{
    struct Node *temp;
    temp->data=x;
    temp->next=head;
    head=temp;
    for(int i=1;i<pos-1&&head!=NULL;i++)
    {
        head=head->next;
    }
    temp->next=head->next;
    head->next=temp;
    printNode(head);
}
int main()
{
    struct Node *head = new Node(10);
    struct Node *temp1 = new Node(20);
    struct Node *temp2 = new Node(30);
    head->next=temp1;
    head->next->next=temp2;
    //recursivePrintNode(head);
    //insertInstart(head,50);
    //printNode(insertAtLast(head,40));
    insertAtPosition(head,1,50);
    //printNode(head);
    return 0;
}
