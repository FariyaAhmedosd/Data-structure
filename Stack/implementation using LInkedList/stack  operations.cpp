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
        cout<<" pushed "<<top->data<<" in the stack "<<endl;
        size++;
    }
    int peek()
    {
        if(top==NULL)
        {
            cout<<"stack is empty";
            return -1;
        }
        else
            return top->data;
    }
    bool isEmpty()
    {
        if(top==NULL)
        {
      return true;
        }
        else
            return false;
    }
int isSize()
{
    return size;
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
    if(st.isEmpty())
    {
        cout<<"stack is empty"<<endl;
    }
    else
    {
    cout<<"stack is not empty"<<endl;
    }
    cout<<"Top element is : "<<st.peek()<<endl;
    cout<<"Size of stack is : "<<st.isSize();
}

