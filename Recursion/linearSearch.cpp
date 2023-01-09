#include<iostream>
using namespace std;
int linearsearch(int a[],int x,int pos,int n)
{
    if(n==0)
    return -1;
    if(a[0]==x)
    return pos;
    return linearsearch(a+1,x,pos+1,n-1);
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int x;
    cin>>x;
    cout<<linearsearch(a,x,0,n);
}