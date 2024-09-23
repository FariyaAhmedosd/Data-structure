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
string PostfixToPrefix(string postfix)
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
            st.push(postfix[i]+op2+op1);
        }
    }
    return st.top();
}
int main()
{
    string postfix,prefix;
    cout<<"Enter a postfix expression: ";
    cin>>postfix;
    prefix=PostfixToPrefix(postfix);
    cout<<"The Prefix expression of given postfix expression is: "<<prefix;
}
