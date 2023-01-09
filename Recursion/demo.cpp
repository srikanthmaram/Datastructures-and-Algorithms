#include<iostream>

#include<iostream>
using namespace std;
int fun(int x)
{
    if(x==1)
    return 1;
    else
    return 1+fun(x-1);
}
int main()
{
    cout<<fun(3);
}