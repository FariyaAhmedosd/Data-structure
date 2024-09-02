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
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}
void sort(node*&head)
{
  node*curr=head;
  while(curr!=NULL)
  {
  node*temp=curr->next;
  while(temp!=NULL)
  {
    if(curr->data>=temp->data)
    {
       swap(curr->data,temp->data);
    }
    temp=temp->next;
  }
  curr=curr->next;
}
}
int main()
{
    node*node1=new node(5);
    node*head=node1;
    node*tail=node1;
    insert_tail(tail,2);
    insert_tail(tail,7);
    insert_tail(tail,4);
    insert_tail(tail,1);
    cout<<"Before sorting: ";
    print(head);
    cout<<"\nAfter sorting: ";
    sort(head);
    print(head);

}
