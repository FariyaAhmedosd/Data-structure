#include<iostream>
using namespace std;
int fibonacci(int n)
{
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    else
        return fibonacci(n-1)+fibonacci(n-2);
}

int main()
{
    int n;
    int i=0;
    cout<<"Enter the number of term: ";
    cin>>n;
    cout<<"The fibonacci number of given term: "<<fibonacci(n)<<endl;
    cout<<"The fibonacci series of given term: ";
    while(i<n)
    {
        cout<<fibonacci(i)<<" ";
        i++;
    }


}
