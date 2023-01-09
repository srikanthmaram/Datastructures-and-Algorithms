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
int height(node * root)
{
    if(root==NULL)
    return 0;
    int l=height(root->left);
    int r=height(root->right);
    int h=max(l,r);
    return 1+h;
}
int printLevelOrder(node * root)
{
    if(root==NULL)
    return 0;
    queue<node*> st;
    st.push(root);
    int cnt=0;
    while(!st.empty())
    {

cnt++;
        int s=st.size();
        for(int i=0;i<s;i++)
        {
            node * current=st.front();
            st.pop();
            st.push(current->left);
            st.push(current->right);
            cout<<"hai";
          
        }
    }
    return cnt;
}
int main()
{
     
    node * root=NULL;
    root=buildTree(root);
    cout<<"the height of tree is : " << printLevelOrder(root);
    
}