#include<iostream>
#include<stack>
using namespace std;
bool isvalid(string str)
{
    stack<int>st;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='('||str[i]=='{'||str[i]=='[')
            {
                st.push(str[i]);
            }
            else if((st.top()=='('&&str[i]==')')||(st.top()=='{'&&str[i]=='}')||(st.top()=='['&&str[i]==']'))
                {
                    st.pop();
                }
                else
                {
                    st.push(str[i]);
                }
        }
                if(st.empty())
                {
                    return true;
                }
                else
                    return false;
}

int main()
{
    string str= "[({[()]})]";
   if(isvalid(str))
   {
       cout<<"Valid parenthesis";
   }
   else
    cout<<"Invalid parenthesis";

}
