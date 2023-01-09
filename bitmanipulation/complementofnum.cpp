#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int result=0;
    int i=0;
    while (n)
    {
        if((n&1)==0)
        result+=(1<<i);
        i++;
        n>>=1;
    }
    cout<<result;
    
}