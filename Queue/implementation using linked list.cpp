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
class queue
{
public:
    node*front;
    node*rear;
    queue()
    {
        front=NULL;
        rear=NULL;
    }
bool isEmpty()
{
    if(front==NULL)
        return true;
    else
        return false;
}
void push(int data)
{
    node*node1=new node(data);
    if(isEmpty())
   {
       front=node1;
       rear=node1;
       return;
   }
   else
    rear->next=node1;
    rear=rear->next;
}
void pop()
{
    if(isEmpty())
    {
        cout<<"Queue underflow";
        return;
    }
    else
    {
        node*temp=front;
        cout<<"popped element is: "<<front->data<<endl;
        front=front->next;
        temp->next=NULL;
        delete temp;
    }
}
int get_front()
{
    if(isEmpty())
    {
        cout<<"queue is empty";
        return -1;
    }
    else
        return front->data;
}
int get_rear()
{
    if(isEmpty())
    {
        cout<<"queue is empty";
        return -1;
    }
    else
        return rear->data;
}
void print()
{
    node*temp=front;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}
};
int main()
{
    queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    cout<<"Before pop elements are: ";
    q.print();
    cout<<endl;
    q.pop();
    cout<<"After pop elements are: ";
    q.print();
    cout<<endl;
    cout<<"Front element is: "<<q.get_front()<<endl;
    cout<<"Rear element is: "<<q.get_rear()<<endl;

}
