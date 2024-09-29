#include<iostream>
using namespace std;
class queue
{
    public:
    int *arr;
    int size;
    int front,rear;
    queue(int n)
    {
       size=n;
       arr=new int[n] ;
       front=rear=-1;
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
    void push(int data)
    {
        if(isEmpty())
        {
            front=rear=0;
            arr[0]=data;
        }
        else if (isFull())
        {
            cout<<"Queue overflow";
            return;
        }
        else
           rear=(rear+1)%size;
           arr[rear]=data;
           cout<<arr[rear]<<" pushed on the queue"<<endl;
    }
    void pop()
    {
        if(isEmpty())
    {
         cout<<"Queue underflow";
            return;
    }
        else if(front==rear)
        {
            rear=front=-1;
        }
        else
            cout<<"popped element is: "<<get_front()<<endl;
            front=(front+1)%size;

    }
    int get_front()
    {
        if(isEmpty())
        {
        cout<<"Queue is empty";
        return -1;
        }
        else
            return arr[front];
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
    q.pop();
    q.pop();
    cout<<"After pop elements are: ";
    q.print();
    cout<<endl;
    q.push(60);
    q.push(70);
  cout<<"Front element is: "<<q.get_front();


}
