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
int main()
{
    int x,left,right;
    cout<<"Enter the root element: ";
    cin>>x;
    queue<node*>q;
    node*root=new node(x);
    q.push(root);
    while(!q.empty())
    {
        node*temp=q.front();
        q.pop();
        cout<<"Enter the left child of "<<temp->data<<" :";
        cin>>left;
        if(left!=-1)
        {
            temp->left=new node(left);
            q.push(temp->left);
        }
        cout<<"Enter the right child of "<<temp->data<<" :";
        cin>>right;
        if(right!=-1)
        {
            temp->right=new node(right);
            q.push(temp->right);
        }
    }


}



