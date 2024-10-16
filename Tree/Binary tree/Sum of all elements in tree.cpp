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
node*BinaryTree()
{
  int x;
  cin>>x;
  if(x==-1)
  {
      return NULL;
  }
  node*temp=new node(x);
  cout<<"Enter the left child of "<<x<<":";
  temp->left=BinaryTree();
  cout<<"Enter the right child of "<<x<<":";
  temp->right=BinaryTree();
}
int SumofData(node*root,int&sum)
{
    if(root==NULL)
    {
        return 0;
    }
    return (root->data+SumofData(root->left,sum)+SumofData(root->right,sum));
}
int main()
{
    int sum=0;
    cout<<"Enter root element: ";
    node*root=BinaryTree();
    cout<<"Sum of all elements in tree is : "<<SumofData(root,sum);
}
