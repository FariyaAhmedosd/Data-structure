#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node*next;
    node(int value)
    {
        data=value;
        next=NULL;
    }
};
class stack
{
    public:
    node*top;
    int size;
    stack()
    {
        top=NULL;
        size=0;
    }
    void push(int data)
    {
        node*temp=new node(data);
        if(temp==NULL)
        {
            cout<<"Stack overflow ";
        }
        temp->next=top;
        top=temp;
        cout<<top->data<<" ";
        size++;
    }

};
int main()
{
    stack st;
    st.push(2);
    st.push(4);
    st.push(6);
    st.push(8);
    st.push(10);
}

