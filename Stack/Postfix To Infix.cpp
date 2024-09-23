#include<iostream>
#include<stack>
using namespace std;
bool isOperand(char c)
{
    if(c>='a'&&c<='z'||c>='A'&&c<='Z')
    {
        return true;
    }
    else
        return false;
}
string PostfixToInfix(string postfix)
{
    stack<string>st;
    for(int i=0;i<postfix.length();i++)
    {
       if(isOperand(postfix[i]))
       {
           string op(1,postfix[i]);
           st.push(op);
       }
       else
       {
        string op1=st.top();
        st.pop();
        string op2=st.top();
        st.pop();
        st.push('('+op2+postfix[i]+op1+')');
       }
    }
    return st.top();
}
int main()
{
    string postfix,infix;
    cout<<"Enter a postfix expression: ";
    cin>>postfix;
    infix=PostfixToInfix(postfix);
    cout<<"The Infix expression of given postfix expression is: "<<infix;
}
