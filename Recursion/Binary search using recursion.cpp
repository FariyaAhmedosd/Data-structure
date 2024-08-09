#include<iostream>
using namespace std;
int arr[10],n,low,high,k;
bool binary_search(int arr[],int n,int low,int high,int k)
{
    if(low>high)
    {
        return false;
    }
    int mid=(low+high)/2;
    if(arr[mid]==k)
    {
        return true;
    }
    else if(arr[mid]>k)
        return binary_search(arr,n,low,mid-1,k);
    else
        return binary_search(arr,n,mid+1,high,k);
}
int main()
{
    cout<<"Enter size: ";
    cin>>n;
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<" Before sorting array elements are: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
     for(int i=0;i<n;i++)
        {
            for(int j=0;j<n-1;j++)
            {
                if(arr[j]>arr[j+1])
                {
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
    cout<<"After sorting array elements are: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Enter searching element: ";
    cin>>k;
 if(binary_search(arr,n,0,n-1,k))
   {
       cout<<"Element is present";
   }
   else
   {
    cout<<"element is not present";
   }
   return 0;
}


