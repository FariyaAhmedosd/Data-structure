#include<iostream>
using namespace std;
class node
{
public:
    int data;
    node*next;
    node*prev;
    node(int value)
    {
        data=value;
        next=NULL;
        prev=NULL;
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
class deque
{
    public:
    node*front;
    node*rear;
    deque()
    {
        front=NULL;
        rear=NULL;
    }
    void push_front(int data)
    {
        node*node1=new node(data);
        if(front==NULL)
        {
           front=rear=node1;
           cout<<"pushed in front: "<<front->data<<endl;
           return;
        }
        else
        {
            node*temp=node1;
            temp->next=front;
            front->prev=temp;
            front=temp;
            cout<<"pushed in front: "<<front->data<<endl;
            return;
        }
    }
    void push_back(int data)
    {
        node*node2=new node(data);
        if(front==NULL)
        {
            front=rear=node2;
            cout<<"pushed in back: "<<front->data<<" ";
            return;
        }
        else
        {
            node*temp=node2;
            rear->next=temp;
            temp->prev=rear;
            rear=temp;
            cout<<"pushed in back: "<<rear->data<<endl;
            return;
        }
    }
    void pop_front()
    {
       if(front==NULL)
        {
            cout<<"underflow";
            return;
        }
        else
        {
            node*temp=front;
            cout<<"popped element from front is:"<<temp->data<<endl;
            front=front->next;
            temp->prev=NULL;
            temp->next=NULL;
            delete temp;
        }
        if(front)
        {
            front->prev=NULL;
        }
        else
            rear=NULL;
    }
    void pop_back()
    {
      if(front==NULL)
        {
            cout<<"underflow";
            return;
        }
        else
        {
            node*temp=rear;
            cout<<"popped element from back is: "<<temp->data<<endl;
            rear=rear->prev;
            temp->prev=NULL;
            temp->next=NULL;
            delete temp;
        }
        if(rear)
        {
            rear->next=NULL;
        }
        else
            front=NULL;
    }
    int start()
    {
        if(front==NULL)
        {
            return 0;
        }
        else
        {
           return front->data;
        }
    }
    int end()
    {
        if(front==NULL)
        {
            return 0;
        }
        else
        {
            return rear->data;
        }
    }
};
int main()
{
    deque d;
    d.push_front(5);
    d.push_front(10);
    d.push_back(15);
    d.push_back(20);
    d.pop_front();
    d.pop_back();
    cout<<"start element is : "<<d.start()<<endl;
    cout<<"end element is: "<<d.end();

}
