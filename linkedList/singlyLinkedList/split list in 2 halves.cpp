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
    cout<<endl;
}

void splitList(node*&head,node*&front_ref,node*&back_ref)
{
    node *slow = head;
    node *fast = head->next;

    if(head == NULL)
        return;
    while(fast != NULL)
    {
    fast = fast->next;
    if(fast!=NULL)
    {
       slow=slow->next;
       fast=fast->next;
    }
    }
    front_ref=head;
    back_ref=slow->next;
    slow->next=NULL;
}
int main()
{
    node*node1=new node(10);
    node*head=node1;
    node*tail=node1;
    node*firsthalf=NULL;
    node*secondhalf=NULL;
    insert_tail(tail,20);
    insert_tail(tail,30);
    insert_tail(tail,40);
    insert_tail(tail,50);
    insert_tail(tail,60);
    print(head);
    splitList(head,firsthalf,secondhalf);
    cout << "\nFirst half of Linked List: ";
    node*temp=firsthalf;
    print(firsthalf);
   cout << "\nSecond half of Linked List: ";
   temp=secondhalf;
   print(secondhalf);
    return 0;

}
