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


insert_tail(node*&tail,int data)
{
    node*temp=new node(data);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
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
    insert_tail(tail,30);
    print(head);
    insert_tail(tail,40);
    insert_tail(tail,50);
    print(head);

}
