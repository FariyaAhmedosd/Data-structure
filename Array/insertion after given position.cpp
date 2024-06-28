#include<iostream>
using namespace std;
int main()
{
    int arr[10],n,i,x,pos;
    cout<<"Enter the size: ";
    cin>>n;
    cout<<"Enter array elements:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the position to insert after:";
    cin>>pos;
    for(int i=n;i>=pos;i--)
    {
        arr[i]=arr[i-1];
    }

    cout<<"value to insert:";
    cin>>x;
    arr[pos]=x;
    n++;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
