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
void insert_head(node*&head,int data)
{
    node*temp=new node(data);
    temp->next=head;
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
void sum(node*&head)
{
    node*temp=head;
    int sum=0;
    while(temp!=NULL)
    {
     sum=sum+temp->data;
    temp=temp->next;
    }
    cout<<"sum is: "<<sum;
}

int main()
{
    node* node1=new node(10);
    node*head=node1;
    print(head);
    insert_head(head,13);
    print(head);
    insert_head(head,6);
    print(head);
    insert_head(head,69);
    print(head);
    insert_head(head,21);
    print(head);
    linear_search(head,20);
    cout<<endl;
    sum(head);
}

