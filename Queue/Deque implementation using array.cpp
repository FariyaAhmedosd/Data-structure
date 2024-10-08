#include<iostream>
using namespace std;
class deque
{
    public:
    int *arr;
    int front,rear,size;
    deque(int n)
    {
        size=n;
        front=rear=-1;
        arr=new int[n];
    }
    bool isEmpty()
    {
        if(front==-1)
            return true;
        else
            return false;
    }
    bool isFull()
    {
        if((rear+1)%size==front)
            return true;
        else
            return false;
    }
    void push_front(int data)
    {
       if(isEmpty())
       {
           front=rear=0;
           arr[0]=data;
           cout<<"pushed in front: "<<arr[0]<<endl;
           return;
       }
       else if(isFull())
       {
           cout<<"overflow";
           return;
       }
       else
       {
           front=(front-1+size)%size;
           arr[front]=data;
           cout<<"pushed in front: "<<arr[front]<<endl;
       }
    }
void push_back(int data)
    {
        if(isEmpty())
       {
           front=rear=0;
           arr[0]=data;
           cout<<"pushed in back: "<<arr[0]<<endl;
           return;
       }
       else if(isFull())
       {
           cout<<"overflow";
           return;
       }
       else
       {
           rear=(rear+1)%size;
           arr[rear]=data;
           cout<<"pushed in back: "<<arr[rear]<<endl;
       }
    }
void pop_front()
{
    if(isEmpty())
    {
        cout<<"underflow";
        return;
    }
   else if(front==rear)
    {
        front=rear=-1;
        return;
    }
    else
    {
     cout<<"popped element is:"<<arr[front]<<endl;
      front=(front+1) %size;
      return;
    }
}
void pop_back()
{
    if(isEmpty())
    {
        cout<<"underflow";
        return;
    }
   else if(front==rear)
    {
        front=rear=-1;
        return;
    }
    else
    {
     cout<<"popped element is:"<<arr[rear]<<endl;
      rear=(rear-1+size) %size;
      return;
    }
}
int start()
{
    if(isEmpty())
        return 0;
    else
    return arr[front];
}
int end()
{
    if(isEmpty())
        return 0;
    else
        return arr[rear];
}
};
int main()
{
    deque d(10);
    d.push_front(20);
    d.push_front(10);
    d.push_back(40);
    d.push_back(30);
    d.pop_front();
    d.pop_back();
    cout<<"start element is : "<<d.start()<<endl;
    cout<<"end element is: "<<d.end();
}
