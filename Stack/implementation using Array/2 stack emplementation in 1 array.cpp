#include<iostream>
#include<stack>
using namespace std;
class Twostack
{
    public:
    int*arr;
    int top1;
    int top2;
    int size;
    Twostack(int size)
    {
        this->size=size;
        arr=new int[size];
        top1=-1;
        top2=size;
    }
void push1(int element)
{
    if(top2-top1>1)
    {
        top1++;
        arr[top1]=element;
        cout<<arr[top1]<<" ";
    }
    else
        cout<<"stack overflow "<<endl;
}
void push2(int element)
{
    if(top2-top1>1)
    {
        top2--;
        arr[top2]=element;
        cout<<arr[top2]<<" ";
    }
    else
        cout<<"stack overflow"<<endl;
}
void pop1()
{
    if(top1>=0)
    {
        cout<<"Before pop top element of stack 1 is: "<<arr[top1]<<endl;
        top1--;
        cout<<"After pop top element of stack 1 is: "<<arr[top1]<<endl;
    }
    else
        cout<<"stack underflow ";
}
void pop2()
{
    if(top2<size)
    {
        cout<<"Before pop top element of stack 2 is: "<<arr[top2]<<endl;
        top2++;
        cout<<"After pop top element of stack 2 is: "<<arr[top2]<<endl;
    }
    else
        cout<<"stack underflow";
}
};
int main()
{
    Twostack st(10);

    st.push1(10);
    st.push1(20);
    st.push1(30);
    st.push1(40);
    st.push1(50);
    cout<<endl;
    st.push2(60);
    st.push2(70);
    st.push2(80);
    st.push2(90);
    st.push2(100);
    cout<<endl;
    st.pop1();
    st.pop2();
}




