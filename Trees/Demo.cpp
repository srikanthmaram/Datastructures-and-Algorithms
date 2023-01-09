#include<bits/stdc++.h>
using namespace std;
struct node{
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
  cout<<"enter  data: "<<endl;
  cin>>data;
  root =new node(data);
  

}