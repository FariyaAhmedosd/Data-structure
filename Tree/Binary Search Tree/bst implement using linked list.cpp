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
void inorder(node*root)
{
    if(root!=NULL)
    {
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
    }
}
int main()
{
    node*root=getNode(10);
    insertNode(root,34);
    insertNode(root,5);
    insertNode(root,50);
    insertNode(root,67);
    inorder(root);
}
