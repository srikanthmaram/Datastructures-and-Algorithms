#include<bits/stdc++.h>
using namespace std;
int clearBit(int n,int pos)
{
    return   (n&(~(1<<pos)));
}
int main()
{
  int n,pos;
  cin>>n>>pos;
  cout<<clearBit(n,pos) ;
  return 0;
}