#include<iostream>
#include<stack>
using namespace std;
 void nextGreater(int arr[],int n)
{
   stack<int>st;
   for(int i=0;i<n;i++)
   {
        while(!st.empty()&&st.top()<arr[i])
   {
       cout<<st.top()<<"->"<<arr[i]<<endl;
        st.pop() ;
   }
   st.push(arr[i]);
   }
   while(!st.empty())
   {
       cout<<st.top()<<"->"<<-1;
       st.pop();
   }
}
  int main()
{
    int arr[10], n;
    cout<<"Array size: ";
    cin>>n;
    cout<<"Enter array elements:";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i] ;
    }
    nextGreater(arr,n);

}
