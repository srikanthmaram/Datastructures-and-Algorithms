#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    // while (n)
    // {
    //     cout<<(n%2);
    //     n/=2;
    // }
    
    while (n)
    {
        if((n&1)==0)
        cout<<"0";
        else
        cout<<"1";
        n>>=1;
    }
    
}