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

node*get_mid(node*&head)
{
    node*slow=head;
    node*fast=head->next;
    while(fast!=NULL)
    {
        fast=fast->next;
        if(fast!=NULL)
        {
            slow=slow->next;
            fast=fast->next;
        }
    }
    return slow;
}
node*reverse_node(node*&head)
{
    node*curr=head;
    node*prev=NULL;
    node*next1=NULL;
    while(curr!=NULL)
    {
        next1=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next1;
    }
    return prev;
}
bool is_palindrome(node*&head)
{
    if(head==NULL || head->next==NULL)
        return true;
    node*middle=get_mid(head);
    node*temp=middle->next;
    middle->next=reverse_node(temp);
    node*head1=head;
    node*head2=middle->next;
    while(head2!=NULL)
    {
        if(head1->data!=head2->data)
        {
            return false;
        }
        head1=head1->next;
        head2=head2->next;
    }
    return true;
}
int main()
{
    node*node1=new node(1);
    node*head=node1;
    node*tail=node1;
    insert_tail(tail,2);
    insert_tail(tail,2);
    insert_tail(tail,2);
    insert_tail(tail,1);
    cout<<"list is: ";
    print(head);
    cout<<endl;
    if(is_palindrome(head))
        cout<<"list is palindrome" ;
    else
        cout<<"List is not palindrome ";

}
