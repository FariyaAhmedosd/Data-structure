#include<iostream>
#include<stack>
#include<queue>
using namespace std;
 void print(queue<int>&q)
 {
     while(!q.empty())
     {
         cout<<q.front()<<" ";
         q.pop();
     }
 }
 void reverseQueue(queue<int>&q)
 {
     stack<int>st;
     while(!q.empty())
     {
         st.push(q.front());
         q.pop();
     }
     while(!st.empty())
     {
         q.push(st.top());
         st.pop();
     }
 }
int main()
{
    queue<int>q;
    q.push(5);
    q.push(10);
    q.push(15);
    q.push(20);
    q.push(25);
    q.push(30);
    reverseQueue(q);
    cout<<"Reverse queue: ";
    print(q);
}
