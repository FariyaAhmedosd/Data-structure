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
string PrefixToPostfix(string prefix)
{
    stack<string>st;
    for(int i=prefix.length()-1;i>=0;i--)
    {
        if(isOperand(prefix[i]))
        {
            string op(1,prefix[i]);
            st.push(op);
        }
        else
        {
            string op1=st.top();
            st.pop();
            string op2=st.top();
            st.pop();
            st.push(op1+op2+prefix[i]);
        }
    }
    return st.top();
}
int main()
{
    string prefix,postfix;
    cout<<"Enter a prefix expression : ";
    cin>>prefix;
    postfix = PrefixToPostfix(prefix);
    cout<<"The postfix expression of given prefix expression is: "<<postfix;
}
