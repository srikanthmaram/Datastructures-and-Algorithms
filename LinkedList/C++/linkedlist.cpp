#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *link;
    node(int d)
    {
        data=d;
        link=NULL;

    }
};
void insertAtHead(node* &head,int d)
{
    node *temp=new node(d);
   temp->link=head;
   head=temp;
}
void insertAtTail(node* &head,int d)
{
    node *tempnode=new node(d);
    if(head==NULL)
    {
         head=tempnode;
         return;
    }
    node *thead=head;
    while (thead->link!=NULL)
    {
        thead=thead->link;
    }
    thead->link=tempnode;    
}
void insertAtPosition(node* head,int position,int d)
{
    node * tempNode=new node(d);
    int cnt=1;
    while (cnt<position-1)
    {
        head=head->link;
        cnt++;
    }
    tempNode->link=head->link;
    head->link=tempNode;

    
}
void deleteAtPosition(node* &head,int position)
{
    if(position==1)
    {
       node* temp=head;
        head=head->link;
        delete temp;
        return;
    }
    node *temp=head;
    node *prev=NULL;
    int cnt=1;
    while (position!=cnt)
    {
        prev=temp;
        temp=temp->link;
        cnt++;
    }
    prev->link=temp->link;
    delete temp;
    
}
void print(node* temphead)
{
    
    while (temphead!=NULL)
    {
        cout<<temphead->data<<"->";
        temphead=temphead->link;
    }
    
}
int main()
{
    node *head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtPosition(head,3,0);
    print(head);
    deleteAtPosition(head,3);
    cout<<endl;
    print(head);
    deleteAtPosition(head,1);
    cout<<endl;
    print(head);
    
    
}