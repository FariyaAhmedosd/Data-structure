#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node*prev;
    node*next;
    node(int value)
    {
        data=value;
        prev=NULL;
        next=NULL;
    }
    ~node()
    {
        int value=data;
        if(next!=NULL)
        {
            delete next;
            next=NULL;
        }
        cout<<"The deleted value is: "<<data;
        cout<<endl;
    }

};
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
void insert_tail(node*&tail,int data)
{
    node*temp=new node(data);
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}
void Delete_node(node*&head,node*&tail,int pos)
{
    if(pos==1)
    {
        node*temp=head;
        head=head->next;
        head->prev=NULL;
        temp->next=NULL;
        delete temp;
    }
    else
        {
            node*prev=NULL;
            node*curr=head;
            int count=1;
            while(count<pos)
            {
                prev=curr;
                curr=curr->next;
                count++;
            }
         curr->prev=NULL;
         prev->next=curr->next;
         curr->next=NULL;
         delete curr;
}
}


int main()
{
    node*node1=new node(10);
    node*head=node1;
    node*tail=node1;
    insert_tail(tail,12);
    insert_tail(tail,14);
    insert_tail(tail,16);
    insert_tail(tail,18);
    insert_tail(tail,20);
    print(head);
    Delete_node(head,tail,1) ;
    cout<<"After deletion List is: ";
    print(head);
    Delete_node(head,tail,3);
    cout<<"After deletion List is: ";
    print(head);
    Delete_node(head,tail,4);
    cout<<"After deletion List is: ";
    print(head);



}
