#include<iostream>
using namespace std;

int main()
{
  int  n,arr[10],i ,pos,x ;
    cout<<"Enter array size: ";
    cin>>n;
    cout<<"Enter array elements: ";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Array elements before insertion: ";
    for( i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Enter the position: ";
    cin>>pos;
    cout<<"Enter the elment to insert: ";
    cin>>x;
    for(int i=n;i>=pos-1;i--)
    {
        arr[i]=arr[i-1];

    }
    arr[pos-1]=x;
    n++;
    cout<<"Array elements after insertion: ";
    for( i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}
