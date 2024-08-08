#include<iostream>
using namespace std;
int arr[10],n;
bool is_sorted(int arr[],int n)
{
    if(n==0||n==1)
        return true;
    for(int i=0;i<n;i++)
        {
            if(arr[i+1]<arr[i])
                return false;
            else
                return true;
        }
}

int main()
{
    cout<<"size of array is : ";
    cin>>n;
    cout<<"Input Array elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Array elements are: ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    if(is_sorted(arr,n))
    {
    cout<<"Array is sorted"<<endl;
    }
    else
    {
        cout<<"Array is not sorted";
    }
}
