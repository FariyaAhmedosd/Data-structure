#include<iostream>
using namespace std;
int ans;
int power(int a,int b)
{
    if(b==0)
        return 1;
    if(b==1)
        return a;
    else
    ans=power(a,b/2);
    if(b%2==0)
        return ans*ans;
    else
        return a*ans*ans;
}
int main()
{
    int a,b;
    cout<<"Insert a and b: ";
    cin>>a>>b;
    cout<<endl;
    int ans=power(a,b);
    cout<<"Answer is: "<<ans;
    return 0;
}
