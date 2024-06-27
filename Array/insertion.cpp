#include<iostream>
using namespace std;
int main()
{
    int arr[10],n,i,x,pos;
    cout<<"Enter the size:";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the position want to insert:";
    cin>>pos;
    cout<<"Enter the element to insert:";
    cin>>x;
    for(i=n;i>=pos-1;i--)
    {
        arr[i]=arr[i-1];
    }
    /*for(int i=n;i>0;i--)
    {
        arr[i]=arr[i-1];
    }*/
    //arr[i]=x;
    arr[pos-1]=x;
    n++;
    for(int i=0;i<n;i++)
    {
       cout<<arr[i]<<" ";
    }

}
