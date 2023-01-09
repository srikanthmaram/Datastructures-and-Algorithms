#include<iostream>
using namespace std;
bool getBit(int n,int i)
{
    return ((n&(1<<i))!=0);
}
void unique1(int a[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
     sum=(sum^a[i]);
     cout<<sum;
}
void unique2(int a[],int n)
{
     int xorsum=0;
     for(int i=0;i<n;i++)
     {
        xorsum=(xorsum^a[i]);
     }
     int temp=xorsum;
     int pos=0;
     while((temp&1)==0)
     {
        pos++;
        temp=(temp>>1);
     }
     int sum=0;
     for(int i=0;i<n;i++)
     {
        if(getBit(a[i],pos))
        {
           sum=(sum^a[i]);
        }
     }
     cout<<sum<<" "<<(xorsum^sum);

}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    unique2(a,n);
}