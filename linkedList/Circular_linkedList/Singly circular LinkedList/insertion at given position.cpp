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
void insert_end(node*&head,int data)
{
    node*new_node=new node(data);
    if(head==NULL)
    {
      head=new_node;
      new_node->next=head;
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
        new_node->next=head;
    }
}
void insert_start(node*&head,int data)
{
    node*new_node=new node(data);
    if(head==NULL)
    {
      head=new_node;
      new_node->next=head;
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
        new_node->next=head;
        head=new_node;
    }
}
void insert_pos(node*&head,int pos,int data)
{
    if(pos==1)
    {
        insert_start(head,data);
        return ;
    }
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
    temp->next=nodeToInsert;
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
    insert_end(head,10);
    insert_end(head,20);
    insert_end(head,30);
    insert_end(head,40);
    insert_end(head,50);
    cout<<"Before insertion list is:";
    print(head);
    insert_pos(head,1,5);
    cout<<"After insertion list is:";
    print(head);
    insert_pos(head,3,15);
    cout<<"After insertion list is:";
    print(head);
    insert_pos(head,8,55);
    cout<<"After insertion list is:";
    print(head);
}
