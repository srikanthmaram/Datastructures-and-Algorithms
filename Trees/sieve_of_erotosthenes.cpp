//  Used to find the prime numbers in given range ()

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    bool a[n+1]={};
   for(int i=2;i*i<=n;i++)
   {
    if(a[i]==0){
    for(int j=i*i;j<=n;j++)
    {
        if(j%i==0)
        a[j]=1;
    }
    }
   }
   for(int i=0;i<n;i++)
   {
    if(a[i]==0)
    cout<<i<<" ";
   }

}