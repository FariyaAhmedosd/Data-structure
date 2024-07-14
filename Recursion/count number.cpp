#include<iostream>
using namespace std;
void count_num(int n)
{
    if(n==0)
    {
        return;
    }
    count_num(n-1);
    cout<<n<<" ";

}
int main()
{
    int n;
    cout<<"Ente the number: ";
    cin>>n;
    count_num(n);
}
