#include<iostream>
using namespace std;
int arr[10],n;
int get_sum(int arr[],int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return arr[0];
    }
    else
    {
        int sum;
        sum=arr[0]+get_sum(arr+1,n-1);
        return sum;
    }
}
int main()
{
    cout<<"Enter size: ";
    cin>>n;
    cout<<"enter array elements: ";
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
    int sum = get_sum(arr,n);
    cout<<"Sum is: "<<sum;
}
