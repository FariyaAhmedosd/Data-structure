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
    ~node()
    {
        int value=data;
        if(next!=NULL)
        {
            delete next;
            next=NULL;
        }
        cout<<"memory is free and the delete value is: "<<data;
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
/*void insert_head(node*&head,int data)
{
    node*temp=new node(data);
    temp->next=head;
    head=temp;
}*/
void insert_tail(node*&tail,int data)
{
    node*temp=new node(data);
    tail->next=temp;
    tail=temp;
}
void Delete_node(node*&head,node*&tail,int pos)
{
    if(pos==1)
    {
       node*temp=head;
       head=head->next;
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
    print(head);
    insert_tail(tail,14);
    insert_tail(tail,16);
    print(head);
    cout<<"Head is:"<<head->data<<endl;
    Delete_node(head,tail,1);
    print(head);
    cout<<"Head is: "<<head->data<<endl;
    cout<<"Tail is: "<<tail->data<<endl;


}
