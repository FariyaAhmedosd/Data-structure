#include<iostream>
#include<Stack>
using namespace std;
class Stack
{
    public:
    int *arr;
    int top;
    int size;
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
            cout<<arr[top]<<endl;
        }
        else
        {
            cout<<"stack overflow";
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
    st.push(60);
    cout<<endl;
}
