#include<iostream>
#include<stack>
using namespace std;
int main()
{
     int x;
    stack<int>temp;
    stack<int>mystack;
    mystack.push(50);
    mystack.push(40);
    mystack.push(30);
    mystack.push(20);
    mystack.push(10);
    cout<<"Before pushing the element:";
    while (!mystack.empty())
    {
        cout<<mystack.top()<<" ";
        temp.push(mystack.top());
        mystack.pop();
    }
    cout<<endl;
    cout<<"Enter the element want to push at last: ";
    cin>>x;
    temp.push(x);
    cout<<"After pushing the element: ";
    while(!temp.empty())
    {
        mystack.push(temp.top());
        temp.pop();
    }
    while (!mystack.empty())
    {
        cout<<mystack.top()<<" ";
        mystack.pop();
    }
    return 0;
}

