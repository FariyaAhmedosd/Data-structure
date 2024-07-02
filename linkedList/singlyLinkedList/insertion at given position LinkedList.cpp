#include<iostream>
using namespace std;
class node
{   public:
    int data;
    node*next;
    node(int value)
    {
        data=value;
        next=NULL;
    }
};
void print(node*&head)
{
    node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}void insert_head(node*&head,int data)
{
    node*temp=new node(data);
    temp->next=head;
    head=temp;
}
void insert_tail(node*&tail,int data)
{
    node*temp=new node(data);
    tail->next=temp;
    tail=temp;
}


void insert_pos(node*&head,node*&tail,int pos,int data)
{
    if(pos==1)
    {
       insert_head(head,data);
        return ;
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

    node *nodetoInsert=new node(data);
    nodetoInsert->next=temp->next;
    temp->next=nodetoInsert;
}

int main()
{
    node*node1=new node(10);
    node*head=node1;
    node*tail=node1;
    insert_head(head,11);
    print(head);
    insert_tail(tail,12);
    insert_tail(tail,15);
    print(head);
    insert_pos(head,tail,1,22);
    print(head);
    cout<<"head: "<<head->data<<" ";
    cout<<"Tail: "<<tail->data<<" ";
}

