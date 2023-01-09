#include<iostream>
using namespace std;
int binarysearch(int a[],int x,int start,int end)
{
    if(start<=end){
   int mid=(start+end)/2;
   if(a[mid]==x)
   return mid;
   else if(x<a[mid])
   binarysearch(a,x,start,mid-1);
   else
   binarysearch(a,x,mid+1,end);
    }
    return -1;
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
     cout<<binarysearch(a,x,0,n-1);

}