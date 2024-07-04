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
int get_length(node*&head)
{
    node*temp=head;
    int len=0;
    while(temp!=NULL)
    {
        len++;
        temp=temp->next;
    }
    return len;
}


int main()
{
    node*node1=new node(10);
    node*head=node1;
    insert_head(head,20);
    insert_head(head,30);
    insert_head(head,40);
    insert_head(head,50);
    cout<<"Length of linked List: "<<get_length(head);

}
