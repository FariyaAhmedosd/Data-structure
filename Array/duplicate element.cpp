#include<iostream>
using namespace std;
int main()
{
    int arr[10],n,i,j;
    cin>>n;
    for( i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for( i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
    {
       if(arr[i]==arr[j])
        {
            cout<<arr[i]<<" ";
        }

    }


    }
}
