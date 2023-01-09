#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node *left,*right;
    node(int d)
    {
         data=d;
        left=NULL;
        right=NULL; }
};
node * buildTree(node * root)
{
    int data;
    cout<<"enter the data: ";
    cin>>data;
    if(data==-1)
    return NULL;
    root=new node(data);
    cout<<"enter the data for inserting left of : "<<data;
   root->left=buildTree(root);
    cout<<"enter the data for inserting right of : "<<data;
    root->right=buildTree(root);
    return root ;
}
int main()
{
    node * root=NULL;
    buildTree(root);
}
