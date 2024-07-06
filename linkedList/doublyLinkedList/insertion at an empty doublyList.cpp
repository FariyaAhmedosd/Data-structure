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
    head->prev=temp;
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
    temp->prev=NULL;
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
void insert_pos(node*&head,node*&tail,int pos,int data)
{
    if(pos==1)
    {
        insert_head(head,tail,data);
        return;
    }
    node*temp=head;
    int count=1;
    while(count<pos-1)
    {
        temp=temp->next;
        count++;
    }
    if(temp->next==NULL)
    {
        insert_tail(head,tail,data);
        return ;
    }
    node* nodeToInsert=new node(data);
    nodeToInsert->next=temp->next;
    temp->next->prev=nodeToInsert;
    temp->next=nodeToInsert;
    nodeToInsert->prev=temp;
}
int main()
{
    //node*node1=new node();
    node*head=NULL;
    node*tail=NULL;
    insert_tail(head,tail,20);
    insert_tail(head,tail,40);
    insert_tail(head,tail,50);
    print(head);
    insert_pos(head,tail,2,30);
    print(head);
    insert_pos(head,tail,5,60);
    print(head);
    insert_pos(head,tail,1,5);
    print(head);
}
