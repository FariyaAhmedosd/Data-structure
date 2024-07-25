#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node*prev;
    node*next;
    node(int value)
    {
        data=value;
        next=NULL;
        prev=NULL;
    }
};
insert_start(node*&head,int data)
{
    node*new_node=new node(data);
    if(head==NULL)
    {
        head=new_node;
        new_node->next=head;
        head->prev=new_node;
    }
    node*tail=head;
    while(tail->next!=head)
    {
        tail=tail->next;
    }
    tail->next=new_node;
    new_node->prev=tail;
    new_node->next=head;
    head->prev=new_node;
    head=new_node;
}
void insert_end(node*&head,int data)
{    node*new_node=new node(data);
    if(head==NULL)
    {
        head=new_node;
        new_node->next=head;
        head->prev=new_node;
    }
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
void insert_pos(node*&head,int pos,int data)
{
    if(pos==1)
    {
        insert_start(head,data);
        return;
    }
    else
    {
        node*temp=head;
        int count=1;
        while(count<pos-1)
        {
            temp=temp->next;
            count++;
        }
        if(temp->next==head)
        {
            insert_end(head,data);
            return;
        }
        node*nodeToInsert=new node(data);
        nodeToInsert->next=temp->next;
        temp->next->prev=nodeToInsert;
        temp->next=nodeToInsert;
        nodeToInsert->prev=temp;
    }
}

void print(node*&head)
{
    node*temp=head;
     do
     {
        cout<<temp->data<<"->";
        temp=temp->next;
     }
     while(temp!=head);
     cout<<endl;
}
int main()
{
    node*head=NULL;
    insert_end(head,20);
    insert_end(head,40);
    insert_end(head,50);
    insert_end(head,60);
    print(head);
    insert_pos(head,1,10);
    print(head);
    insert_pos(head,3,30);
    print(head);
    insert_pos(head,7,70);
    print(head);

}

