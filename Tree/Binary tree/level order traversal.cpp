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
    cout<<"Enter the left child of "<<x<<":";
    temp->left=BinaryTree();
    cout<<"Enter the right child of "<<x<<":";
    temp->right=BinaryTree();
}
void LevelOrder(node*root)
{
    if(root==NULL)
    {
        return;
    }
   queue<node*>q;
   q.push(root) ;
   while(!q.empty())
   {
       node*temp=q.front();
       cout<<temp->data<<" ";
       if(temp->left!=NULL)
       {
           q.push(temp->left);
       }
       if(temp->right!=NULL)
       {
           q.push(temp->right);
       }
       q.pop();
   }
}
int main()
{
    cout<<"Enter root element: ";
    node*root=BinaryTree();
    LevelOrder(root);
}
