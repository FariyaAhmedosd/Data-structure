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
node*getNode(int data)
{
    node*temp=new node(data);
    temp->left=NULL;
    temp->right=NULL;
    return temp;
}
node*insertNode(node*root,int data)
{
   if(root==NULL)
    {
        root=getNode(data);
        return root;
    }
    else if(data<=root->data)
    {
        root->left=insertNode(root->left,data);
    }
    else if (data>root->data)
    {
        root->right=insertNode(root->right,data);
    }
    return root;
}
void ksum(node*root,int&sum ,int&k)
{
  if(!root)
  {
      return ;
  }
  ksum(root->left,sum,k);
  k--;
  if(k>=0)
  {
      sum=sum+root->data;
  }
  if(k<=0)
  {
      return;
  }
  ksum(root->right,sum,k);
}
int sum(node*root,int k)
{
    int sum=0;
    ksum(root,sum,k);
    return sum;
}

int main()
{
    node*root=getNode(10);
    insertNode(root,15);
    insertNode(root,5);
    insertNode(root,25);
    insertNode(root,67);
    int k=3;
    cout<<"Sum is: "<<sum(root,k);
}
