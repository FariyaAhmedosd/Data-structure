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
void insert_tail(node*&tail,int data)
{
    node*temp=new node(data);
    tail->next=temp;
    tail=temp;

}
void print(node*&head)
{
    node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";;
        temp=temp->next;
    }
}

void reverse_list(node*&head)
{
    node*prev=NULL;
    node*curr=head;
    while(curr!=NULL)
    {
        node*next1=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next1;
    }
     head=prev;
     cout<<endl;
}

int main()

{
    node*node1=new node(10);
    node*head=node1;
    node*tail=node1;
    insert_tail(tail,20);
    insert_tail(tail,30);
    insert_tail(tail,40);
    print(head);
    reverse_list(head);
    print(head);



}
