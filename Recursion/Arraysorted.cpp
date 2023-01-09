#include<iostream>
using namespace std;
bool isSorted(int a[],int size)
{
    if(size==0||size==1)
    return true;
    if(a[0]>a[1])
    return false;
    else
    return isSorted(a+1,size-1);
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    cout<<isSorted(a,n);
}