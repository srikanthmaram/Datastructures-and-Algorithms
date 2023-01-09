#include<iostream>
using namespace std;
class node{
    public: 
    int data;
    node *right,*left;
    node(int data)
    {
     this->data=data;
     this->right=NULL;
     this->left=NULL;
    }
};
void insertAtTail(node* &head,int data)
{
    node* tempNode=new node(data);

    if(head==NULL)
    {
        head=tempNode;
        return;
    }
    node *temp=head;
    while(temp->right!=NULL)
    {
        temp=temp->right;
    }
    temp->right=tempNode;
    tempNode->left=temp;
}
void print(node * head)
{
    while (head!=NULL)
    {
        cout<<head->data<<"--><--";
        head=head->right;
    }
    
}

int main()
{
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    print(head);

}