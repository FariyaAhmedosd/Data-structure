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
int find_length(node*&head)
{
    node*temp=head;
    int len=0;
    while(temp!=NULL)
    {
        temp=temp->next;
        len++;
    }
    return len;
}
int get_middle(node*&head)
{
    int len=find_length(head);
    int mid=len/2;
    int count=0;
    node*temp=head;
    while(count<mid)
    {
        temp=temp->next;
        count++;
    }
    return temp->data;
}
int main()
{
    node*node1=new node(10);
    node*head=node1;
    node*tail=node1;
    insert_tail(tail,20);
    insert_tail(tail,30);
    insert_tail(tail,40);
    insert_tail(tail,50);
    insert_tail(tail,60);
    print(head);
    cout<<"Length is: "<<find_length(head)<<endl;
    cout<<"Data of middle node is: "<<get_middle(head);
}
