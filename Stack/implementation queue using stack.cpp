#include<iostream>
#include<stack>
using namespace std;
class queue
{
public:
     stack<int>st1;
     stack<int>st2;
 bool isEmpty()
 {
   if(st1.empty()&&st2.empty())
            return true;
    else
        return false;
 }
void push(int data)
{
        st1.push(data);
        cout<<st1.top()<<" ";
}

int pop()
{
    if(isEmpty())
    {
       return 0;
    }
    if(!st2.empty())
    {
       int element =st2.top() ;
       st2.pop();
       return element;
    }
    else
        while(!st1.empty())
    {
        st2.push( st1.top());
        st1.pop();
    }
    int element=st2.top();
    st2.pop();
    return element;
}
int peek()
{
   if(isEmpty())
    {
        return 0;
    }
    if(!st2.empty())
    {
      return st2.top() ;
    }
    else
    {
        while(!st1.empty())
    {
        st2.push( st1.top());
         st1.pop();
    }
       return  st2.top();
    }
}
};
int main()
{
    queue q;
    cout<<"Queue elements are: ";
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    cout<<endl;
   cout<<"peek element is:"<<q.peek()<<endl;
   cout<<"popped element is:"<<q.pop()<<endl;
   cout<<"peek element is:"<<q.peek();

}
