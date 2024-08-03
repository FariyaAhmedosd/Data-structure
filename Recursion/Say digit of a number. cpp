#include<iostream>
using namespace std;
void say_digit(int n,string arr[])
{
    if(n==0)
        return;
    else
    {
        int digit=n%10;
        n=n/10;
        say_digit(n,arr);
        cout<<arr[digit]<<" ";
    }
}
int main()
{
    int n;
    string arr[10]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    cout<<"Enter the number:";
    cin>>n;
    cout<<endl;
    say_digit(n,arr);
}
