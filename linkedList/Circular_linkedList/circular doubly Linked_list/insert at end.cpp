#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node*next;
    node*prev;
    node(int value)
    {
        data=value;
        next=NULL;
        prev=NULL;
    }
};
void insert_end(node*&head,int data)
{
    node*new_node=new node(data);
    if(head==NULL)
    {
       head=new_node;
       new_node->next=head;
       head->prev=new_node;
       return;
    }
    else
    {
        node*tail=head;
        while(tail->next!=head)
        {
            tail=tail->next;
        }
        tail->next=new_node;
        new_node->prev=tail;
        new_node->next=head;
        head->prev=new_node;
    }
}
void print(node*&head)
{
    node*temp=head;
    do
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    while(temp!=head);
}
int main()
{
    node*head=NULL;
    insert_end(head,10);
    insert_end(head,20);
    insert_end(head,30);
    insert_end(head,40);
    insert_end(head,50);
    print(head);
}
