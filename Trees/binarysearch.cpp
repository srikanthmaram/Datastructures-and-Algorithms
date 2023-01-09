#include<iostream>
using namespace std;
int binarySearch(int a[],int start,int end,int x)
{
    int mid=(start+end/2);
    if(a[mid]==x)
    return mid;
    if(a[mid]>x)
    binarySearch(a,mid+1,end,x);
    else
    binarySearch(a,start,mid-1,x);
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
   cout<<binarySearch(a,0,n,x);
}