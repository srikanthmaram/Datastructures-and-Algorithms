#include<bits/stdc++.h>
using namespace std;
#define max 1000
bool hash1[max+1][2];
void fun(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
        hash1[a[i]][0]=1;
        else
        hash1[abs(a[i])][1]=1;
    }
}
bool search(int n)
{
    if(n>0)
    {
        return hash1[n][0]==true;

    }
    else
    {
       return hash1[abs(n)][1]==true;
    }

}

int main(){

   int n=6;
   int a[n]={1,2,3,4,5,-4};
    fun(a,n);
    if(search(-4))
    {
        cout<<"it is present";
    }
    else
    {
        cout<<"it is not present ";
    }
   
   }