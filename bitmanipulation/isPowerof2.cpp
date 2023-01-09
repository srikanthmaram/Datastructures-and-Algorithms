#include<bits/stdc++.h>
using namespace std;
bool isPowerof2(int n)
{
    if(n==0)
    return false;
    else
    return ((n&n-1)==0);
}
int main()
{
int n;
cin>>n;
cout<<isPowerof2(n);
}