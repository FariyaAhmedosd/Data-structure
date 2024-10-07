#include<iostream>
#include<queue>
using namespace std;
class stack
{
    public:
    queue<int>q1;
    queue<int>q2;
bool isEmpty()
{
    if(q1.empty()&&q2.empty())
        return true;
    else
        return false;
}
void push(int data)
{
    if(isEmpty())
    {
       q1.push(data);
       cout<<data<<" ";
    }
    else if(q1.empty())
    {
      q2.push(data) ;
       cout<<data<<" ";
    }
       else
       {
        q1.push(data);
       cout<<data<<" ";
       }
}
int pop()
{
    if(isEmpty())
        return 0;
    else if(q1.empty())
    {
        while(q2.size()>1)
        {
            q1.push(q2.front());
            q2.pop();
        }
       int element=q2.front();
       q2.pop();
       return element;
    }
    else
    {
        while(q1.size()>1)
        {
          q2.push(q1.front()) ;
          q1.pop();
        }
        int element=q1.front();
        q1.pop();
        return element;
    }
}
int top()
{
    if(isEmpty())
        return 0;
    else if(q1.empty())
        return q2.back();
        else
          return q1.back();
}
};
int main()
{
    stack st;
    cout<<"Elements are:";
    st.push(5);
    st.push(6);
    st.push(7);
    st.push(8);
    st.push(9);
    st.push(10);
    cout<<endl;
    cout<<"Top element is: "<<st.top()<<endl;
    cout<<"popped element is: "<<st.pop()<<endl;
    cout<<"Top element is: "<<st.top();
}


