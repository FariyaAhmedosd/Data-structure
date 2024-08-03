#include<iostream>
using namespace std;
int count_stairs(int n)
{
    if(n<0)
    {
        return 0;
    }
    if(n==0)
    {
        return 1;
    }
    return count_stairs(n-1)+count_stairs(n-2);
}
int main()
{
    int n;
    cout<<"Enter the number of stairs: ";
    cin>>n;
    cout<<"The number of ways to reach the given number of stairs: "<<count_stairs(n);
}
