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
void Levelorder_Traversal(node * root)
{
    cout<<"Level Order: ";
    vector<int> ans;
    if(root==NULL)
    return;
    queue<node*> q;
    node* temp=root;
    q.push(temp);
    while(!q.empty())
    {
       int n=q.size();
       for(int i=0;i<n;i++)
       {
        node* current=q.front();
        q.pop();
        if(current->left!=NULL) q.push(current->left);
        if(current->right!=NULL) q.push(current->right);
        cout<<current->data<<" ";
       }
    }
}
int main()
{
    node * root = NULL;
    root=buildTree(root);
    Levelorder_Traversal(root) ;
    return 0;
}