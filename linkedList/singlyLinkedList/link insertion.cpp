#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node *next;
    node(int value)
    {
        data=value;
        next=NULL;
    }
};
void print(node *&head)
{
    node *temp=head;
    int count=0;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
        count++;
    }
    cout<<endl;
    cout<<"Number of linked list:"<<count;
    cout<<endl;
}
void insert_head(node*&head,int d)
{
 node*temp=new node(d);
 temp->next=head;
 head=temp;

}
void insert_tail(node*&tail,int d)
{
 node*temp=new node(d);
 tail->next=temp;
 tail=temp;

}
int main()
{
    node*node1=new node(20);
    node*head=node1;
    insert_head(head,30);
    insert_head(head,40);
    insert_head(head,60);
    print(head);
    cout<<endl;
    node*tail=node1;
    insert_tail(tail,40);
    insert_tail(tail,50);
    print(head);
}
