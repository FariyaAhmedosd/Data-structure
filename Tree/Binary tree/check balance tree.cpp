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
    cout<<"Enter the left child of "<<x<<" :";
    temp->left=BinaryTree();
    cout<<"Enter the right child of "<<x<<" :";
    temp->right=BinaryTree();
    return temp;
}
int height(node*root,bool&valid)
{
  if(root==NULL)
  {
      return 0;
  }
  int l=height(root->left,valid);
  int r=height(root->right,valid);
  if(abs(l-r)>1)
  {
      valid=0;
  }
  else
    return (1+max(l,r));
}
bool isBalance(node*root)
{
    bool valid=1;
    height(root,valid);
    return valid;
}

int main()
{
    cout<<"Enter root elements : ";
    node*root=BinaryTree();
    if(isBalance(root))
    {
        cout<<"The tree is balance ";
    }
    else
        cout<<"The tree is not balance ";
}
