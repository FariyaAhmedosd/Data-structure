#include<iostream>
using namespace std;
class queue
{
    public:
    int*arr;
    int size;
    int front,rear;
    queue(int n)
    {
        size=n;
        arr=new int[n];
        front=rear=-1;
    }
bool isEmpty()
{
    if(front==-1)
    {
        return true;
    }
    else
        return false;
}
bool isFull()
{
    if(rear==size-1)
        return true;
    else
        return false;
}
void push(int data)
{
    if(isEmpty())
    {
        front=rear=0;
        arr[0] =data;
    }
    else if(isFull())
    {
        cout<<"Queue overflow";
        return;
    }
    else
        rear++;
        arr[rear]=data;
}
void pop()
{
    if(isEmpty())
    {
        cout<<"queue underflow";
    }
    else if(front==rear)
    {
      front=rear=-1;
    }
    else
        front++;
}
int start()
{
    if(isEmpty())
    {
        cout<<"Queue is empty";
    }
    else
        cout<<arr[front];
}
void print()
{
    for(int i=front;i<=rear;i++)
    {
        cout<<arr[i]<<" ";
    }
}
};
int main()
{
    queue q(5);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    cout<<"Before pop elements are: ";
    q.print();
    cout<<endl;
    cout<<"popped element is: ";
    q.start();
    cout<<endl;
    q.pop();
    cout<<"After pop elements are: ";
    q.print();
    cout<<endl;
    cout<<"Front element is: ";
    q.start();

}
