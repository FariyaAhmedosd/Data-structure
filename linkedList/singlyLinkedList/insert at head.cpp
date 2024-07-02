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
int main()
{
    node* node1=new node(10);
    node*head=node1;
    print(head);
    insert_head(head,12);
    print(head);
    insert_head(head,15);
    print(head);

}

