#include<iostream>
using namespace std;
void Reverse(string &name,int i,int j)
{
    if(i>j)
        return;
    else
        swap(name[i],name[j]);
         i++;
         j--;
       return Reverse(name,i,j);
}
int main()
{
    string name="ABCDE";
    cout<<"given string: "<<name;
    cout<<endl;
    Reverse(name,0,name.length()-1);
    cout<<"Reverse of given string: "<<name;
    return 0;

}

