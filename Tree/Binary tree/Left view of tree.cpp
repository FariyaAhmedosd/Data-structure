#include<iostream>
#include<queue>
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
void LeftView(node*root)
{
    if(root==NULL)
    {
        return;
    }
 queue<node*>q;
 q.push(root);
 while(!q.empty())
 {
     int n=q.size();
     cout<<q.front()->data<<" ";
     while(n--)
     {
         node*temp=q.front();
         if(temp->left)
         {
             q.push(temp->left);
         }
         if(temp->right)
         {
             q.push(temp->right);
         }
         q.pop();
     }
 }
}
int main()
{
    cout<<"Enter the root node: ";
    node*root=BinaryTree();
    cout<<"Left view of binary tree : ";
    LeftView(root);

}
