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
    ~node()
    {
        int value=data;
        if(next!=NULL)
        {
            delete next;
            next=NULL;
        }
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
void delete_start(node*&head)
{
    if(head==NULL)
    {
        return;
    }
    else
    {
        node*temp=head;
        node*tail=head;
        while(tail->next!=head)
        {
            tail=tail->next;
        }
        head=head->next;
        tail->next=head;
        head->prev=tail;
        temp->prev=NULL;
        temp->next=NULL;
        delete temp;
    }
}
void delete_pos(node*&head,int pos)
{
   if(pos==1)
   {
       delete_start(head);
       return;
   }
   else
   {
       node*prev=NULL;
       node*curr=head;
       int count=1;
       while(count<pos)
       {
           prev=curr;
           curr=curr->next;
           count++;
       }
       prev->next=curr->next;
       curr->next->prev=prev;
       curr->prev=NULL;
       curr->next=NULL;
       delete curr;
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
    cout<<endl;
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
    delete_pos(head,3);
    print(head);
    insert_end(head,60);
    print(head);
    delete_pos(head,1);
    print(head);
    insert_end(head,80);
    print(head);
    delete_pos(head,5);
    print(head);



}
