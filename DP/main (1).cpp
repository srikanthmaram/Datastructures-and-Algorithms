#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;

int main() {

	// Your code here
  int n,k;
  cin>>n>>k;
  int a[n];
  for(int i=0;i<n;i++)
  cin>>a[i];
  int b[n];
int count=0;
  for(int i=0;i<n;i++)
  {
    if(a[i]<=k)
    {
      count++;
      b[i]=count;
    }
    else
    {
      count=0;
      b[i]=0;
    }
  }
//   for(int i=0;i<n;i++)
//   {
//       cout<<b[i]<<" ";
//   }

int max=0;
for(int i=0;i<n;i++)
{
    if(max<b[i])
    max=b[i];
    
}



int start=0,end=0;
for(int i=0;i<n;i++)
{
  if(b[i]==max)
  end=i;
}
start=end-max+1;



for(int i=start;i<=end;i++)
{
    a[i]=k;
}
for(int i=0;i<n;i++)
{
    cout<<a[i]<<" ";
}



int sum=0;
for(int i=0;i<n;i++)
{
    sum=sum+a[i];
}
cout<<"\n"<<sum;


	return 0;
}