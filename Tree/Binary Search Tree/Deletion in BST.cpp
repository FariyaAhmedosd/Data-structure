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
node* getSuccessor(node* curr)
{
    curr = curr->right;
    while (curr != NULL && curr->left != NULL)
        curr = curr->left;
    return curr;
}
node*deleteNode(node*root,int target)
{
    if(root==NULL)
    {
        return NULL;
    }
    if(target<root->data)
    {
        root->left=deleteNode(root->left,target);
        return root;
    }
    if(target>root->data)
    {
        root->right=deleteNode(root->right,target);
        return root;
    }
    if(!root->right&&!root->left)
    {
        delete root;
        return NULL;
    }
   else if(!root->right)
    {
        node*temp=root->left;
        delete root;
        return temp;
    }
  else  if(!root->left)
    {
        node*temp=root->right;
        delete root;
        return temp;
    }
   else
   {

    node* succ = getSuccessor(root);
        root->data = succ->data;
        root->right = deleteNode(root->right, succ->data);
    }
    return root;
}
int main()
{
    int arr[10]={20,2,10,23,67,89,12,5},target;
    node*root=NULL;
    for(int i=0;i<8;i++)
    {
        root=insert(root,arr[i]);
    }
    cout<<"In order traversal of elements : ";
    inorder(root);
    cout<<endl;
    cout<<"Which element  you like to delete: ";
    cin>>target;
    deleteNode(root,target);
    cout<<" After deletion in order traversal of elements : ";
    inorder(root);

}
