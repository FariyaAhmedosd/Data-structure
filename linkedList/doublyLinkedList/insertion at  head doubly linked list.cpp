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


insert_head(node*&head,int data)
{
    node*temp=new node(data);
    temp->next=head;
    head->prev=temp;
    head=temp;
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
    insert_head(head,20);
    insert_head(head,30);
    print(head);
    insert_head(head,40);
    insert_head(head,50);
    print(head);

}
