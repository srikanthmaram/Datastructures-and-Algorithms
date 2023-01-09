#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node * left;
    node * right;
    node(int data)
    {
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};
node * buildTree(node * root)
{
    int data;
    cout<<"enter data:"<<endl;
    cin>>data;
    root=new node(data);
    if(data==-1)
   {
     return NULL;
   }
    cout<<"enter the data for inserting in left of :"<<data<<endl;
    root->left=buildTree(root->left);
    cout<<"enter  the data for inserting in right of :"<<data<<endl;
    root->right=buildTree(root->right);
    return root;
}
void preorder(node * root)
{
    if(root==NULL)
    return;
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(node * root)
{
    if(root==NULL)
    return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}
void postorder(node * root)
{
    if(root==NULL)
    return ;
    postorder(root->left);
    postorder(root->right);
    cout<<root->data;
}
int main()
{
    node * root = NULL;
    root=buildTree(root); 
    cout<<" Preorder traversal is : ";
    preorder(root);
    cout<<" inorder traversal is : ";
    inorder(root);
    cout<<" postorder traversal is : ";
    postorder(root);
    return 0;
}