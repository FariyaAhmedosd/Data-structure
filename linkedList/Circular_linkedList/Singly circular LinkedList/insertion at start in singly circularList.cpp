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
    insert_start(head,10);
    insert_start(head,20);
    insert_start(head,30);
    insert_start(head,40);
    insert_start(head,50);
    print(head);
}
