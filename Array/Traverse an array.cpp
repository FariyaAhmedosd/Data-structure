#include<iostream>
using namespace std;
int main()
{
    int size,arr[10];
    cin>>size;
    cout<<"Enter the array elements: ";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    cout<<"The array elements are:";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
}
