#include<iostream>
#include<stack>
#include<queue>
using namespace std;
void Print(queue<int>& Queue)
{
    while (!Queue.empty()) {
        cout << Queue.front() << " ";
        Queue.pop();
    }
}

void reverseQueueKnode(queue<int>& Queue,int k)
{
    stack<int> Stack;
    for(int i=0;i<k;i++)
        {
           Stack.push(Queue.front()) ;
           Queue.pop();
        }
        int n=Queue.size();

    while (!Stack.empty()) {
        Queue.push(Stack.top());
        Stack.pop();
    }

    while(n--)
    {
        Queue.push(Queue.front());
        Queue.pop();
    }
}

int main()
{
    queue<int> Queue;
    Queue.push(10);
    Queue.push(20);
    Queue.push(30);
    Queue.push(40);
    Queue.push(50);
    Queue.push(60);
    Queue.push(70);
    Queue.push(80);
    Queue.push(90);
    Queue.push(100);

    reverseQueueKnode(Queue,4);
    cout<<"After reversing first k elements: ";
    Print(Queue);
}
