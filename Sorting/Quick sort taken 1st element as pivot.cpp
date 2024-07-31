#include<iostream>
using namespace std;
int arr[10],n;
void swap(int arr[],int i,int j)
{
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
int Partition(int arr[],int l,int r)
{
    int pivot=arr[l];
    int i=r+1;
    for(int j=r;j>l;j--)
    {
        if(arr[j]>pivot)
        {
         i--;
         swap(arr,i,j);
        }
    }
    swap(arr,i-1,l);
    return i-1;
}
void quick_sort(int arr[],int l,int r)
{
    if(l<r)
    {
  int p = Partition(arr,l,r);
  quick_sort(arr,l,p-1);
  quick_sort(arr,p+1,r);
    }
}

void input()
{
    cout<<"Enter size: ";
    cin>>n;
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
}
void print()
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    input();
    cout<<"Array elements before sorting: ";
    print();
    cout<<endl;
    quick_sort(arr,0,n-1);
    cout<<"Array elements after sorting: ";
    print();
}
