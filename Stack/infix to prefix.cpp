#include<iostream>
#include<stack>
#include<algorithm>
using namespace std;
bool isOperator(char c)
{
    if(c=='+'||c=='-'||c=='*'||c=='/'||c=='^')
        return true;
    else
        return false;
}
int precedence(char c)
{
    if(c=='^')
        return 3;
    else if(c=='*'||c=='/')
        return 2;
    else if(c=='+'||c=='-')
        return 1;
    else
        return -1;
}
string InfixToPrefix(string infix,stack<char>st)
{
  string prefix;
  reverse(infix.begin(),infix.end());
  for(int i=0;i<infix.length();i++)
  {
      if(infix[i]=='(')
      {
          infix[i]=')';
      }
      else if(infix[i]==')')
      {
          infix[i]='(';
      }
  }
  for(int i=0;i<infix.length();i++)
  {
      if(infix[i]>='a'&&infix[i]<='z'||infix[i]>='A'&&infix[i]<='Z')
      {
          prefix+=infix[i];
      }
      else if(infix[i]=='(')
      {
          st.push(infix[i]);
      }
      else if(infix[i]==')')
      {
          while(st.top()!='('&&(!st.empty()))
          {
              prefix+=st.top();
              st.pop();
          }
          if(st.top()=='(')
          {
              st.pop();
          }
      }
      else if(isOperator(infix[i]))
      {
          if(st.empty())
          {
              st.push(infix[i]);
          }
          else
          {
            if(precedence(infix[i])>precedence(st.top()))
          {
              st.push(infix[i]);
          }
          else if(precedence(infix[i])==precedence(st.top())&&st.top()=='^')
          {
             while(precedence(infix[i])==precedence(st.top())&&st.top()=='^')
             {
                 prefix+=st.top();
                 st.pop();
             }
             st.push(infix[i]);
          }
          else if(precedence(infix[i])==precedence(st.top()))
          {
              st.push(infix[i]);
          }
          else
          {
            while((!st.empty())&&precedence(infix[i])<precedence(st.top()))
          {
              prefix+=st.top();
              st.pop();
          }
          st.push(infix[i]);
          }

      }
  }
}
  while(!st.empty())
  {
      prefix+=st.top();
      st.pop();
  }
  reverse(prefix.begin(),prefix.end());
  return prefix;
}
int main()
{
    string infix,prefix;
    cout<<"Enter a infix expression: ";
    cin>>infix;
    stack<char>st;
    prefix=InfixToPrefix(infix,st);
    cout<<"Prefix expression of given expression is : "<<prefix;
}
