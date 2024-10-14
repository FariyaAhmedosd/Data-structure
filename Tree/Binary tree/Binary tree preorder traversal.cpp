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
    cout<<"Enter the right child of"<<x<<":";
    temp->right=BinaryTree();
    return temp;
}
void PreOrder(node*root)
{
    if(root==NULL)
    {
        return;
    }
    cout<<root->data<<" ";
    PreOrder(root->left);
    PreOrder(root->right);
}
int main()
{
    cout<<"Enter the data of root node: ";
    node*root=BinaryTree();
    cout<<"PreOrder : ";
    PreOrder(root);
}
