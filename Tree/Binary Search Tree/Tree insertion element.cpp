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
    if(root==NULL)
    {
        node*temp=new node(value);
        return temp;
    }
    if(root->data>value)
    {
    root->left=insert(root->left,value);
    }
    if(root->data<value)
    {
       root->right=insert(root->right,value);
    }
    return root;
}
void inorder(node*root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main()
{
    int arr[10]={78, 23 ,90 ,12,5};
    node*root=NULL;
    for(int i=0;i<5;i++)
    {
       root=insert(root,arr[i]);
    }
    cout<<"Elements of binary search tree is: ";
    inorder(root);
}
