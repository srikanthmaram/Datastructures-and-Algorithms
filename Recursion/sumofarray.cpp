#include<iostream>
using namespace std;
int sum(int a[],int n)
{
   if(n==1)
   return a[0];
   return a[0]+sum(a+1,n-1);
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"sum is : "<<sum(a,n);
}