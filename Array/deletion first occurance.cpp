#include<iostream>
using namespace std;
int main()
{
    int arr[10],i,j,ele,n,pos;
    cout<<"enter the size of the array: ";
    cin>>n;
    for( i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the ele: ";
    cin>>ele;
     bool found = false;
    for(int i = 0; i < n; i++) {

        // If the element has been found previously,
        // shift the current element to the left
        if(found) {
            arr[i - 1] = arr[i];
        }

        // check if the current element is equal to
        // the element to be removed
        else if(arr[i] == ele) {
            found = true;
        }
    }

    // If element was found, reduce the size of array
    if(found == true)
        n--;
     cout<<"after deleting the array is:";

    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
