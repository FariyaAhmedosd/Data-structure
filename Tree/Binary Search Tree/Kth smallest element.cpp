#include<iostream>
using namespace std;
class node
{
  public:
      int data;
      node*left;
      node*right;
      node(int value)
      {
          data=value;
          left=right=NULL;
      }
};
node*insert(node*root,int value)
{
  if(!root)
  {
      node*temp=new node(value);
      return temp;
  }
  if(value<root->data)
  {
      root->left=insert(root->left,value);
  }
  if(value>root->data)
  {
      root->right=insert(root->right,value);
  }
  return root;
}
void inorder(node*root,int k,int&count,int &result)
{
    if(!root)
        return;
    inorder(root->left,k,count,result);
    count++;
    if(count==k)
    {
      result=root->data;
      return ;
    }
    inorder(root->right,k,count,result);
}
int kthSmallest(node*root,int k)
{
    int count=0;
    int result;
    inorder(root,k,count,result);
    return result;
}
int main()
{
    node*root=NULL;
    int arr[10]={23,5,67,40,12,7};
    for(int i=0;i<6;i++)
    {
        root=insert(root,arr[i]);
    }
    int k=4;
    cout<<"The "<<k<<" th smallest element is: ";
    cout<<kthSmallest(root,k);

}
