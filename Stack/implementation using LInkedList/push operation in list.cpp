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
    ~node()
    {
        int value=data;
        if(next!=NULL)
        {
            delete next;
            next=NULL;
        }
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
    void pop()
    {
        if(top==NULL)
        {
            cout<<"stack underflow";
        }
        else
        {
            node*temp=top;
            cout<<"Before pop top element is: "<<top->data<<endl;
            top=top->next;
            temp->next=NULL;
            cout<<"Popped element is: "<<temp->data<<endl;
            delete temp;
            cout<<"After pop top element is: "<<top->data<<endl;
        }
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
    cout<<endl;
    st.pop();

}

