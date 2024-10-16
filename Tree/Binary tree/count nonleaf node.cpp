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
    return temp;
}
int countNonleaf(node*root)
{
    if(root==NULL)
    {
        return 0;
    }
    if(root->left==NULL&&root->right==NULL)
    {
        return 0;
    }
    return (1+countNonleaf(root->left)+countNonleaf(root->right));
}
int main()
{
    cout<<"Enter the root element : ";
    node*root=BinaryTree();
    cout<<"Total number of non leaf node is : "<<countNonleaf(root);

}
