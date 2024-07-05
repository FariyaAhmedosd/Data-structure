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
 void insert_head(node*&head,int data)
{
    node*temp=new node(data);
    temp->next=head;
    head->prev=temp;
    head=temp;
}
 void insert_tail(node*&tail,int data)
{
    node*temp=new node(data);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}
void insert_pos(node*&head,node*&tail,int pos,int data)
{
    if(pos==1)
    {
        insert_head(head,data);
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
        insert_tail(tail,data);
        return;
    }
    node*nodeToInsert=new node(data);
    nodeToInsert->next=temp->next;
    temp->next->prev=nodeToInsert;
    temp->next=nodeToInsert;
    nodeToInsert->prev=temp;
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
    node*node1=new node(10);
    node*head=node1;
    node*tail=node1;
    insert_tail(tail,20);
    insert_tail(tail,40);
    insert_tail(tail,50);
    print(head);
    insert_pos(head,tail,3,30);
    print(head);

}



