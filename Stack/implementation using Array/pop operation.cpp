#include<iostream>
#include<Stack>
using namespace std;
class Stack
{
    public:
    int *arr;
    int size;
    int top;
    Stack(int size)
    {
        this->size=size;
        top=-1;
        arr=new int[size];
    }
void push(int element)
{
    if(size-top>1)
    {
        top++;
        arr[top]=element;
    }
    else
        cout<<"stack overflow"<<endl;
}
void pop()
{
    if(top>=0)
    {
        cout<<"popped element is: "<<arr[top]<<endl;
        top--;
    }
    else
        cout<<"stack underflow ";
}
void print()
{
    for(int i=0;i<=top;i++)
    {
        cout<<arr[i]<<" ";
    }
}
};
int main()
{
    Stack st(5);
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    cout<<"Before pop stack elements are: ";
    st.print();
    cout<<endl;
    st.pop();
    cout<<"After pop stack elements are: ";
    st.print();

}
