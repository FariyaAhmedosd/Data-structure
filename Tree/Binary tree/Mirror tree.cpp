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
void LevelOrder(node*root)
{
    if(root==NULL)
    {
        return ;
    }
    queue<node*>q;
    q.push(root);
    while(!q.empty())
    {
        node*temp=q.front();
        cout<<temp->data<<" ";
        if(temp->left!=NULL)
        {
            q.push(temp->left);
        }
        if(temp->right!= NULL)
        {
            q.push(temp->right);
        }
        q.pop();
    }
}
void mirror(node*root)
{
    if(root==NULL)
    {
        return;
    }
    node*temp=root->right;
    root->right=root->left;
    root->left=temp;
    mirror(root->left);
    mirror(root->right);
}
int main()
{
    cout<<"Enter the root element: ";
    node*root=BinaryTree();
    cout<<"Level order traversal of given tree: ";
    LevelOrder(root);
    cout<<endl;
    cout<<"level order traversal of the mirror form of given tree";
    mirror(root);
    LevelOrder(root);

}
