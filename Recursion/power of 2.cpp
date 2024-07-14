#include<iostream>
using namespace std;
int power(int n)
{
    if(n==0)
    {
         return 1;
    }
    return 2*power(n-1);

}
int main()
{
    int n;
    cout<<"Ente the number: ";
    cin>>n;
    cout<<"The given power of number 2 is: "<<power(n);
}
