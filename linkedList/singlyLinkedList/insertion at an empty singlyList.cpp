#include<iostream>
using namespace std;
class node
{
  public:
  int data;
  node*next;
  node(int value)
  {
     data=value;
     next=NULL;
  }

};
void insert_head(node*&head,node*&tail,int data)
{
    if(head==NULL)
    {
        node*temp=new node(data);
        head=temp;
        tail=temp;
    }
    else
   {
    node*temp=new node(data);
    temp->next=head;
    head=temp;
    }
}
void insert_tail(node*&head,node*&tail,int data)
{
    if(tail==NULL)
    {
        node*temp=new node(data);
        head=temp;
        tail=temp;

    }
    else
    {
    node*temp=new node(data);
    tail->next=temp;
    tail=temp;
    }
}
void print(node*&head)
{
    node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

 int main()
    {
        node*head=NULL;
        node*tail=NULL;
        insert_tail(head,tail,10);
        insert_tail(head,tail,20);
        print(head);
        insert_tail(head,tail,30);
        insert_tail(head,tail,40);
        print(head);
        insert_head(head,tail,60);
        insert_head(head,tail,50);
        print(head);
    }
