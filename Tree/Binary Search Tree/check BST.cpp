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
        left=NULL;
        right=NULL;
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
    cout<<"Enter the left node of "<<x<<":";
    temp->left=BinaryTree();
    cout<<"Enter the right node of "<<x<<":";
    temp->right=BinaryTree();
}
bool isValid(node*root,int &prev)
{
    if(!root)
        return true;
    if(!isValid(root->left,prev))
        return false;
    if(prev>=root->data)
        return false;
    prev=root->data;
   return  isValid(root->right,prev);
}
bool isBst(node*root)
{
    int prev=INT_MIN;
    return isValid(root,prev);
}
int main()
{
    cout<<"enter root node: ";
    node*root=BinaryTree();
    if(isBst(root))
    {
        cout<<"The tree is balance ";
    }
    else
    {
        cout<<"The tree is not balance";
    }
}
