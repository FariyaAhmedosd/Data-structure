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
bool searchElement(node*root,int target)
{
   if(root==NULL)
   {
       return false;
   }
   if(root->data==target)
   {
       return true;
   }
   else
   {
       return false;
   }
   if(target<root->data)
   {
       searchElement(root->left,target);
   }

   if(target>root->data)
   {
       searchElement(root->right,target);
   }
}
int main()
{
    int arr[10]={45,23,67,12,5};
    node*root=NULL;
    for(int i=0;i<5;i++)
    {
    root=insert(root,arr[i]);
    }
    cout<<"In order traversal of the element of binary search tree: ";
    inorder(root);
    cout<<endl;
    int target;
    cout<<"Enter searching element: ";
    cin>>target;
    if(searchElement(root,target))
    {
        cout<<"Searching element is present";
    }
    else
        cout<<"searching element is not present ";
}
