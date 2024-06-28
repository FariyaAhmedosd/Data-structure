#include<iostream>
using namespace std;
//deletion and insertion of (end + specific position) array elements
int main()
{
    int arr[10],n,i,pos,x;
    cout<<"size: ";
    cin>>n;
    cout<<"Enter the array elements:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the position for deletion:";
    cin>>pos;
    for(int i=pos-1;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    cout<<endl;
    n--;
    cout<<"value for insertion :";
    cin>>x;
    arr[pos-1]=x;
    n++;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;

}
