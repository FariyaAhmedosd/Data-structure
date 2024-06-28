#include<iostream>
using namespace std;

int main()
{
    int n,arr[10],x;
    cout<<"Enter array size: ";
    cin>>n;
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Array elements before insertion: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"Enter the element to insert at begining: ";
    cin>>x;
    for(int i=n;i>=0;i--)
    {
        arr[i]=arr[i-1];

    }
    arr[0]=x;
    n++;
    cout<<"Array elements after insertion: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;

}
