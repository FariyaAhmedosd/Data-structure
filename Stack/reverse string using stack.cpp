#include<iostream>
#include<stack>
using namespace std;
int main()
{
    string str="HELLO";
    stack<char>st;
    for(int i=0;i<str.length();i++)
    {
        st.push(str[i]);
    }
    int i=0;
    while(!st.empty())
    {
        str[i]=st.top();
        cout<<str[i];
        st.pop();
         i++;
    }
}
