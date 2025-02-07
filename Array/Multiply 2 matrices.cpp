#include<iostream>
using namespace std;
int main()
{
    int arr1[3][3],arr2[3][3],k,res[3][3];
    cout<<"Enter 1st matrix: ";
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<"arr1["<<i<<"]["<<j<<"]= ";
            cin>>arr1[i][j];
        }
    }
    cout<<"Enter 2nd matrix: "<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<"arr2["<<i<<"]["<<j<<"]= ";
            cin>>arr2[i][j];
        }
    }
    //multiplyng
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
           int  sum=0;
            for(k=0;k<3;k++)
            {
                sum=sum+(arr1[i][k]*arr2[k][j]);
            }
            res[i][j]=sum;

        }
    }
    cout<<"The new matrix is: "<<endl;

for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
}
