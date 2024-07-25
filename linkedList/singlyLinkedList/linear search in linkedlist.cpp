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
void linear_search(node*&head,int x)
{
    node*temp=head;
    int count=0;
    while(temp!=NULL)
    {
        if(temp->data==x)
    {
            cout<<"The searching element is present";
            count++;
    }
    temp=temp->next;
    }
    if(count==0)
    {
        cout<<"The element is not present";
    }

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
}

