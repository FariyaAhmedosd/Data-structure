#include<iostream>
#include<stack>
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
    cout<<"Enter the left child of "<<x<<": ";
    temp->left=BinaryTree();
    cout<<"Enter the right child of "<<x<<" :";
    temp->right=BinaryTree();
    return temp;
}
void spiral(node*root)
{
    stack<node*>s1;
    stack<node*>s2;
    s1.push(root);
    while(!s1.empty()||!s2.empty())
    {
        if(!s1.empty())
        {
            while(!s1.empty())
            {
                node*temp=s1.top();
                cout<<temp->data<<" ";
                s1.pop();
                if(temp->right)
                {
                    s2.push(temp->right);
                }
                if(temp->left)
                {
                    s2.push(temp->left);
                }
            }
        }
        else
        {
            while(!s2.empty())
            {
                node*temp=s2.top();
                cout<<temp->data<<" ";
                s2.pop();
                if(temp->left)
                {
                    s1.push(temp->left);
                }
                if(temp->right)
                {
                    s1.push(temp->right);
                }
            }
        }
    }
}
int main()
{
    cout<<"Enter the root elements: ";
    node*root=BinaryTree();
    cout<<"Spiral traversal of tree : ";
    spiral(root);
}
