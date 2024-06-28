#include<iostream>
using namespace std;
int main()
{
    int arr[10],n,x;
    cout<<"Enter size: ";
    cin>>n;
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the searching element: ";
    cin>>x;
    int count=0;
    for(int j=0;j<n;j++)
    {
        if(arr[j]==x)
        {
            cout<<"element is found and "<<"the index number is: "<<j;
             count++;
        }
    }

        if(count==0)
        {
            cout<<"Element not found";
        }


}
