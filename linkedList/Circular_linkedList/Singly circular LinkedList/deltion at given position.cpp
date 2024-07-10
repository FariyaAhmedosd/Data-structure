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
    }

};
void insert_start(node*&head,int data)
{
    node*new_node=new node(data);
    if(head==NULL)
    {
        head=new_node;
        new_node->next=head;
        return;
    }
    else{
    node*tail=head;
    while(tail->next!=head)
    {
        tail=tail->next;
    }
    tail->next=new_node;
    new_node->next=head;
    }

}
void print(node*&head)
{
    node*temp=head;
    do
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    while(temp!=head);
    cout<<endl;
}
void delete_start(node*&head)
{
    if(head==NULL)
    {
        return;
    }
    node*tail=head;
    while(tail->next!=head)
    {
        tail=tail->next;
    }
    node*temp=head;
    head=head->next;
    tail->next=head;
    temp->next=NULL;
    delete temp;
}
void delete_pos(node*&head,int pos)
{
    if(pos==1)
    {
        delete_start(head);
        return;
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
    node*head=NULL;
    insert_start(head,10);
    insert_start(head,20);
    insert_start(head,30);
    insert_start(head,40);
    insert_start(head,50);
    insert_start(head,60);
    print(head);
    delete_pos(head,1);
    print(head);
    delete_pos(head,3);
    print(head);
    delete_pos(head,4);
    print(head);


}
