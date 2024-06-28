#include<iostream>
using namespace std;
int main()
{
    int n,arr[10],x,i;
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
    cout<<"Enter the element to insert at end:";
    cin>>x;
    arr[i]=x;
    n++;
    cout<<"Array elements after insertion: ";
    for( i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;


}
